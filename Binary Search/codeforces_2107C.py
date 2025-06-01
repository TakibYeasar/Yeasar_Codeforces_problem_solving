
# Problem link ===>> https://codeforces.com/problemset/problem/2107/C

import sys
import math
import bisect
import heapq
from collections import defaultdict, deque, OrderedDict, Counter
from functools import lru_cache, reduce
from itertools import permutations, combinations, accumulate
from typing import List, Tuple, Dict, Set, Optional, Union, Any

MOD = 10**9 + 7
INF = float('inf')
input = sys.stdin.read
print = sys.stdout.write

def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        s = input().strip()
        a = list(map(int, input().split()))
        
        pos = -1
        for i in range(n):
            if s[i] == '1':
                pos = i
                a[i] = -1e13
        
        mx =0
        curr =0
        for i in range(n):
            curr = max(curr + a[i], a[i])
            mx = max(mx, curr)
            
        if mx > k or (mx != k and pos == -1):
            print("No")
            continue

        if pos != -1:
            L, R = 0, 0
            mx = curr = 0
            for i in range(pos + 1, n):
                curr += a[i]
                mx = max(mx, curr)
            L = mx

            mx = curr = 0
            for i in range(pos - 1, -1, -1):
                curr += a[i]
                mx = max(mx, curr)
            R = mx

            a[pos] = k - L - R
        
        print("Yes")
        print(*a)

if __name__ == "__main__":
    main()

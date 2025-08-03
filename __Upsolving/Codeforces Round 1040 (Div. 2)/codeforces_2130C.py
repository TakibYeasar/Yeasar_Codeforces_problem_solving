
# Problem link ===>> https://codeforces.com/contest/2130/problem/C

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
    data = input().split()
    idx = 0
    t = int(input())
    idx += 1
    for _ in range(t):
        n = int(input())
        idx += 1
        
        a = [0] * (n + 1)
        b = [0] * (n + 1)
        
        for i in range(1, n+1):
            a[i] = int(data[idx])
            idx += 1
            b[i] = int(data[idx])
            idx += 1
            
        tag = [1] * (n + 1)
        ans = []

        for i in range(1, n + 1):
            for j in range(1, n + 1):
                if i == j:
                    continue
                if a[j] <= a[i] and b[i] <= b[j]:
                    tag[i] = 0
            if tag[i]:
                ans.append(i)

        print(str(len(ans)) + '\n')
        print(' '.join(map(str, ans)) + '\n')

if __name__ == "__main__":
    main()


# Problem link ===>> https://codeforces.com/problemset/problem/2126/C

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
        n, p = map(int, input().split())
        a = [0] + list(map(int, input().split()))
        
        curr = a[p]
        dist = a[p]
        sorted_a = sorted(a[1:])
        ans = True
        
        for val in sorted_a:
            if val < curr:
                continue
            if val - curr > dist:
                ans = False
            curr = val

        print("YES" if ans else "NO")
            

if __name__ == "__main__":
    main()

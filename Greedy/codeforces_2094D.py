
# Problem link ===>> https://codeforces.com/problemset/problem/2094/D

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
        p, s = map(str, input().split())
        n = len(p)
        m = len(s)
        
        if m>n or m>2*n or p[0] != s[0]:
            print("NO\n")
            continue
        
        a = []
        b = []
        cnt = 1
        for i in range(1, n):
            if p[i] != p[i-1]:
                a.ppend(cnt)
                cnt = 1
            else:
                cnt += 1
        a.append(cnt)
        
        cnt = 1
        for i in range(1, m):
            if s[i] != s[i-1]:
                b.append(cnt)
                cnt = 1
            else:
                cnt += 1
        b.append(cnt)
        
        if len(a) != len(b):
            print("NO\n")
            continue
        
        ok = True
        for i in range(len(a)):
            if a[i] > b[i] or a[i] * 2 < b[i]:
                ok = False
                break

        print("YES" if ok else "NO")

if __name__ == "__main__":
    main()


# Problem link ===>> https://codeforces.com/problemset/problem/2096/B

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
        m = k-1
        
        l = list(map(int, input().split()))
        r = list(map(int, input().split()))
        
        a=[]
        b =[]
        y =0
        
        for li, ri in zip(l, r):
            a.append(max(li, ri))
            b.append(min(li, ri))
            y += max(li, ri)
            
        b.sort(reverse=True)
        y+= sum(b[:m])
        
        x = y+1
        print(x)

if __name__ == "__main__":
    main()

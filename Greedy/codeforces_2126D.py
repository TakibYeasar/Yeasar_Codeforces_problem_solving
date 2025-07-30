
# Problem link ===>> https://codeforces.com/problemset/problem/2126/D

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
        p =[]
        
        for _ in range(n):
            a, b, c = map(int, input().split())
            p.append((a, b, c))
            
        p.sort()
        curr = k
        for a, b, c in p:
            if a> curr:
                break
            curr = max(curr, c)
        print(curr)

if __name__ == "__main__":
    main()

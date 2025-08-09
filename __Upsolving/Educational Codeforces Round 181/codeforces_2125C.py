
# Problem link ===>> https://codeforces.com/contest/2125/problem/C

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

def good(x):
    return x %2 > 0 and x % 3 >0 and x % 5 > 0 and x % 7 > 0

def get_naive(x):
    ans = 0
    for i in range(x):
        if good(i):
            ans += 1
    return ans

def get(r):
    return (r // 210) * get_naive(210) + get_naive(r % 210)

def main():
    t = int(input())
    for _ in range(t):
        l, r = map(int, input().split())
        print(get(r + 1) - get(l))

if __name__ == "__main__":
    main()

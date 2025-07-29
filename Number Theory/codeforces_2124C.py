
# Problem link ===>> https://codeforces.com/problemset/problem/2124/C

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
        n = int(input())
        a = list(map(int, input().split()))
        gcd = 0
        lcm = 1 
        for i in range(n-1, -1, -1):
            gcd = math.gcd(gcd, a[i])
            lcm = math.lcm(lcm, a[i] // gcd)
        print(lcm)

if __name__ == "__main__":
    main()

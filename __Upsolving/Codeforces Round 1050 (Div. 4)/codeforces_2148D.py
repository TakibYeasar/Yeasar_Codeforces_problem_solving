
# Problem link ===>> https://codeforces.com/contest/2148/problem/D

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

        p = [[], []]
        for x in a:
            p[x % 2].append(x)

        ans = 0
        if p[1]:
            ans += sum(p[0])

        p[1].sort(reverse=True)
        m = len(p[1])
        for i in range((m + 1) // 2):
            ans += p[1][i]

        print(str(ans) + "\n")
        

if __name__ == "__main__":
    main()

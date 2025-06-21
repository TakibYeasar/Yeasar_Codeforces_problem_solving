
# Problem link ===>> https://codeforces.com/problemset/problem/2118/C

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


def count_bits(x):
    return bin(x).count('1')

def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))

        ans = sum(count_bits(x) for x in a)

        cost = []
        for x in a:
            while True:
                req = ((x + 1) | x) - x
                if req > k:
                    break
                cost.append(req)
                x |= (x + 1)

        cost.sort()
        for c in cost:
            if c <= k:
                k -= c
                ans += 1

        print(ans)

if __name__ == "__main__":
    main()

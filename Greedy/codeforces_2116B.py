
# Problem link ===>> https://codeforces.com/problemset/problem/2116/B

import sys
import math
import bisect
import heapq
from collections import defaultdict, deque, OrderedDict, Counter
from functools import lru_cache, reduce
from itertools import permutations, combinations, accumulate
from typing import List, Tuple, Dict, Set, Optional, Union, Any

MOD = 998244353
INF = float('inf')
input = sys.stdin.read
print = sys.stdout.write

# Precompute powers of 2 modulo MOD up to 100000
po = [1] * 100001
for i in range(1, 100001):
    po[i] = (2 * po[i - 1]) % MOD


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())

        p = list(map(int, input().split()))
        q = list(map(int, input().split()))

        # Initialize position arrays with size n (assuming 0-based indexing of values)
        # The original code uses values as indices, so we assume p and q contain values in [0, n-1]
        # If values are 1-based, subtract 1 accordingly here
        posa = [0] * n
        posb = [0] * n
        for i in range(n):
            posa[p[i]] = i
            posb[q[i]] = i

        sa = set()
        sb = set()
        ans = []

        for i in range(n):
            sa.add(p[i])
            sb.add(q[i])

            x = max(sa)
            y = max(sb)

            # Compute indices i - posa[x] and i - posb[y], which must be >= 0
            idx1 = i - posa[x]
            idx2 = i - posb[y]

            # Get pairs p1 and p2 like in C++ code
            p1 = (x, q[idx1])
            p2 = (y, p[idx2])
            ansp = max(p1, p2)

            val = (po[ansp[0]] + po[ansp[1]]) % MOD
            ans.append(val)

        print(' '.join(map(str, ans)) + '\n')


if __name__ == "__main__":
    main()

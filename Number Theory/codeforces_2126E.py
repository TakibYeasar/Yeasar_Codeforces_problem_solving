
# Problem link ===>> https://codeforces.com/problemset/problem/2126/E

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


def main():
    input_data = sys.stdin.read().splitlines()

    def lcm(a: int, b: int) -> int:
        if a == 0 or b == 0:
            return 0
        return abs(a * b) // math.gcd(a, b)

    idx = 0
    t = int(input_data[idx])
    idx += 1

    results = []

    for _ in range(t):
        n = int(input_data[idx])
        idx += 1

        a = [0] + list(map(int, input_data[idx].split()))
        idx += 1

        b = [0] + list(map(int, input_data[idx].split()))
        idx += 1

        ans = [0] * (n + 1)
        for i in range(n, 0, -1):
            ans[i] = lcm(a[i], b[i])

        ch = True
        if ans[1] != a[1]:
            ch = False
        if ans[n] != b[n]:
            ch = False

        if ch:
            for i in range(2, n + 1):
                if math.gcd(a[i - 1], ans[i]) != a[i]:
                    ch = False
                    break

        if ch:
            for i in range(n - 1, 0, -1):
                if math.gcd(b[i + 1], ans[i]) != b[i]:
                    ch = False
                    break

        if ch:
            results.append("YES")
        else:
            results.append("NO")

    sys.stdout.write("\n".join(results) + "\n")


if __name__ == "__main__":
    main()

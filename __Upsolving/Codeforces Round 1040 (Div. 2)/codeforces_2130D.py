
# Problem link ===>> https://codeforces.com/contest/2130/problem/D

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
    data = input().split()
    idx = 0
    t = int(data[idx])
    idx += 1

    for _ in range(t):
        n = int(data[idx])
        idx += 1

        p = list(map(int, data[idx:idx + n]))
        idx += n

        ans = 0
        for i in range(n):
            left = sum(1 for j in range(i) if p[j] > p[i])
            right = sum(1 for j in range(i + 1, n) if p[j] > p[i])
            ans += min(left, right)

        print(str(ans) + '\n')


if __name__ == "__main__":
    main()


# Problem link ===>> https://codeforces.com/contest/2130/problem/A

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
        ans = 0
        for i in range(n):
            tmp = int(input())
            ans += tmp + (tmp == 0)
        print(f"{ans}\n")


if __name__ == "__main__":
    main()

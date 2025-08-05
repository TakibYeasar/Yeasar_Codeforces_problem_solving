
# Problem link ===>> https://codeforces.com/contest/2128/problem/A

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
        c = int(data[idx])
        idx += 1
        a = list(map(int, data[idx:idx+n]))
        idx += n

        a.sort(reverse=True)
        saved = 0
        for x in a:
            if x * (1 << saved) <= c:
                saved += 1

        print(f"{n - saved}\n")


if __name__ == "__main__":
    main()

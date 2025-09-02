
# Problem link ===>> https://codeforces.com/contest/2119/problem/C

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
data = sys.stdin.read().strip().split()
out_lines = []
idx = 0


def main():
    global idx
    t = int(data[idx])
    idx += 1
    for _ in range(t):
        n = int(data[idx])
        idx += 1
        l = int(data[idx])
        idx += 1
        r = int(data[idx])
        idx += 1
        k = int(data[idx])
        idx += 1

        if n % 2 == 1:
            out_lines.append(str(l))
            continue

        if n == 2:
            out_lines.append(str(-1))
            continue

        res = 1
        fl = False

        while res <= r:
            if res > l:
                fl = True
                if k <= n - 2:
                    out_lines.append(str(l))
                else:
                    out_lines.append(str(res))
                break
            res *= 2

        if not fl:
            out_lines.append(str(-1))


if __name__ == "__main__":
    main()
    sys.stdout.write("\n".join(out_lines))

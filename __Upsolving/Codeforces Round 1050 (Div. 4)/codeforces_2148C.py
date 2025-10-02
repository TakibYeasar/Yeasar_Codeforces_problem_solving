
# Problem link ===>> https://codeforces.com/contest/2148/problem/C

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
        n, m = map(int, input().split())
        px, py, points = 0, 0, 0

        for _ in range(n):
            x, y = map(int, input().split())
            points += x - px

            if ((x-px+2) % 2) != ((y-py+2) % 2):
                points -= 1
            px, py = x, y

        if (px != m):
            points += m-px
        print(str(points) + '\n')


if __name__ == "__main__":
    main()

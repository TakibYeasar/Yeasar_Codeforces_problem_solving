
# Problem link ===>> https://codeforces.com/problemset/problem/2093/D

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
        n, q = map(int, input().split())

        for _ in range(q):
            tokens = input().split()

            if tokens[0] == "->":
                x = int(tokens[1]) - 1
                y = int(tokens[2]) - 1

                num = 0
                for i in reversed(range(n)):
                    cur = 1 << i
                    if not (x & cur) and not (y & cur):
                        num ^= 0 << (2 * i)
                    elif (x & cur) and (y & cur):
                        num ^= 1 << (2 * i)
                    elif (x & cur) and not (y & cur):
                        num ^= 2 << (2 * i)
                    elif not (x & cur) and (y & cur):
                        num ^= 3 << (2 * i)

                print(num + 1)

            else:
                num = int(tokens[1]) - 1
                x, y = 0, 0

                for i in reversed(range(n)):
                    cur = (num >> (2 * i)) & 3
                    if cur == 0:
                        x ^= 0 << i
                        y ^= 0 << i
                    elif cur == 1:
                        x ^= 1 << i
                        y ^= 1 << i
                    elif cur == 2:
                        x ^= 1 << i
                        y ^= 0 << i
                    elif cur == 3:
                        x ^= 0 << i
                        y ^= 1 << i

                print(x + 1, y + 1)


if __name__ == "__main__":
    main()

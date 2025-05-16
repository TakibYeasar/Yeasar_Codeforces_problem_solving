
# Problem link ===>> https://codeforces.com/problemset/problem/2108/B

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
        n, x = map(int, input().split())
        bits = count_bits(x)

        if n <= bits:
            return x

        if (n - bits) % 2 == 0:
            return x + (n - bits)
        else:
            if x > 1:
                return x + (n - bits) + 1
            elif x == 1:
                return n + 3
            else:
                if n == 1:
                    return -1
                else:
                    return n + 3

if __name__ == "__main__":
    main()

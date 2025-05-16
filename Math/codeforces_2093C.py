
# Problem link ===>> https://codeforces.com/problemset/problem/2093/C

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


def is_prime(x):
    if x <= 1:
        return False
    for i in range(2, int(math.isqrt(x)) + 1):
        if x % i == 0:
            return False
    return True


def main():
    t = int(input())
    for _ in range(t):
        x, k = map(int, input().split())
        if k > 1 and x > 1:
            print("NO")
        elif k == 1:
            print("YES" if is_prime(x) else "NO")
        else:
            print("YES" if k == 2 else "NO")

if __name__ == "__main__":
    main()

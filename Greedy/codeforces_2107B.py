
# Problem link ===>> https://codeforces.com/problemset/problem/2107/B

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
        n, k = map(int, input().split())
        a = list(map(int, input().split()))

        total_sum = sum(a)
        a.sort()
        a[-1] -= 1
        a.sort()

        if a[-1] - a[0] > k or total_sum % 2 == 0:
            print("Jerry")
        else:
            print("Tom")

if __name__ == "__main__":
    main()

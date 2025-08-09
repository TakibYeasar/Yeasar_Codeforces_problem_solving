
# Problem link ===>> https://codeforces.com/contest/2125/problem/B

import sys
import math
import bisect
import heapq
from math import gcd
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
        a, b, k = map(int, input().split())
        g = gcd(a, b)
        print(1 if a // g <= k and b // g <= k else 2)

if __name__ == "__main__":
    main()

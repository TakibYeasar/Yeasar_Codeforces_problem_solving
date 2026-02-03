
# Problem link ===>> https://codeforces.com/contest/2182/problem/A

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
        s = input()
        if "2025" in s and not "2026" in s:
            print(1)
        else:
            print(0)

if __name__ == "__main__":
    main()


# Problem link ===>> https://codeforces.com/contest/2116/problem/A

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
        a, b, c, d = map(int, input().split())
        if min(a, c) >= min(b, d):
            print("Gellyfish\n")
        else:
            print("Flower\n")

if __name__ == "__main__":
    main()

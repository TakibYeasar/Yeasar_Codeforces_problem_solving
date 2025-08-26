
# Problem link ===>> https://codeforces.com/contest/2119/problem/A

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
        a, b, x, y = map(int, input().split())

        if a > b:
            if (a ^ 1) == b:
                print(y)
            else:
                print(-1)
        else:
            total_moves = b - a
            y_moves = ((b + 1) // 2) - ((a + 1) // 2)
            x_moves = total_moves - y_moves

            if y > x:
                print(total_moves * x)
            else:
                print(x_moves * x + y_moves * y)

if __name__ == "__main__":
    main()

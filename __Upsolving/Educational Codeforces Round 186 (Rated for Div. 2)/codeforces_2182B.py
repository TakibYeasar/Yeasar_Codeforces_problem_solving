
# Problem link ===>> https://codeforces.com/contest/2182/problem/B

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
        a, b = map(int, input().split())
        if a<b:
            a, b = b, a
        x, y = 0, 0
        ans = 0
        cur = 1
        while True:
            x, y = y + cur, x
            if x <= a and y <= b:
                ans += 1
                cur *= 2
            else:
                break
        print(ans)

if __name__ == "__main__":
    main()

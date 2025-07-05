
# Problem link ===>> https://codeforces.com/problemset/problem/2117/E

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
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))

        seen = [False] * (n + 1)

        if a[-1] == b[-1]:
            print(n)
            return

        ans = -1
        for i in range(n - 2, -1, -1):
            if (a[i] == b[i] or
                a[i] == a[i + 1] or
                b[i] == b[i + 1] or
                seen[a[i]] or
                    seen[b[i]]):
                ans = i
                break

            seen[a[i + 1]] = True
            seen[b[i + 1]] = True

        print(ans + 1)

if __name__ == "__main__":
    main()

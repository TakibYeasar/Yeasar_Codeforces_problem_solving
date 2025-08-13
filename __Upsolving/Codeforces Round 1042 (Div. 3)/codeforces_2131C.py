
# Problem link ===>> https://codeforces.com/contest/2131/problem/C

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
        A = list(map(int, input().split()))
        B = list(map(int, input().split()))

        cnt = defaultdict(int)

        for x in A:
            r = x % k
            cnt[min(r, k - r)] += 1
        for x in B:
            r = x % k
            cnt[min(r, k - r)] -= 1

        if all(v == 0 for v in cnt.values()):
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    main()

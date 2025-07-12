
# Problem link ===>> https://codeforces.com/problemset/problem/2123/C

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

        mp = {}
        mn = float('inf')

        for i in range(n):
            if a[i] < mn:
                mn = a[i]
                mp[a[i]] = 1

        mx = float('-inf')
        for i in range(n - 1, -1, -1):
            if a[i] > mx:
                mx = a[i]
                mp[a[i]] = 1

        for num in a:
            print(mp.get(num, 0), end='')
        print()

if __name__ == "__main__":
    main()

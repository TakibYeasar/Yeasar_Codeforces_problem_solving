
# Problem link ===>> https://codeforces.com/problemset/problem/2123/E

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
        a = list
        
        freq = {}
        for x in a:
            freq[x] = freq.get(x, 0) + 1
        
        ans = [0] * (n + 1)
        diff = [0] * (n + 2)
        
        for i in range(n + 1):
            f = freq.get(i, 0)
            diff[f] += 1
            if n - i + 1 < len(diff):
                diff[n - i + 1] -= 1
            if f == 0:
                break

        for k in range(n + 1):
            ans[k] = (ans[k - 1] if k > 0 else 0) + diff[k]
            print(ans[k], end=' ' if k != n else '\n')

if __name__ == "__main__":
    main()

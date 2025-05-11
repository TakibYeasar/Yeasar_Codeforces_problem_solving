
# Problem link ===>> https://codeforces.com/problemset/problem/2094/E

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
        arr = list(map(int, input().split()))
        
        cnt = [0] * 30
        
        for num in arr:
            for j in range(30):
                if num & (1 << j):
                    cnt[j] += 1
        
        ans =0
        
        for num in arr:
            tot = 0
            for j in range(30):
                if (num >> j) & 1:
                    tot += (1 << j) * (n - cnt[j])
                else:
                    tot += (1 << j) * cnt[j]
            ans = max(ans, tot)

        print(ans)

if __name__ == "__main__":
    main()

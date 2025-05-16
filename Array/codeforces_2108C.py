
# Problem link ===>> https://codeforces.com/problemset/problem/2108/C

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
        a = [-1e9]
        
        nums = list(map(int, input().split()))
        for x in nums:
            if a[-1] != x:
                a.append(x)
            
        a.append(1e9)
        
        ans = 0
        for i in range(1, len(a)-1):
            if a[i] > a[i-1] and a[i] >a [i+1]:
                ans +=1
        print(ans)

if __name__ == "__main__":
    main()

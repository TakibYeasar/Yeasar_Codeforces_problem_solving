
# Problem link ===>> https://codeforces.com/contest/2155/problem/A

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
        winners = n
        losers, ans = 0, 0
        
        while max(winners, losers) > 1:
            ans += losers /2
            losers = (losers+1)/2
            
            ans += winners/2
            losers += winners/2
            winners += 1
            winners //= 2
            
        ans += 1
        print(f"{ans}\n")

if __name__ == "__main__":
    main()

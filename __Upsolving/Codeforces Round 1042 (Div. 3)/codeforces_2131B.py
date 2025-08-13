
# Problem link ===>> https://codeforces.com/contest/2131/problem/B

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
        if n == 1:
            print(0)
            continue
        
        ans = []
        for _ in range(n//2):
            ans.append(-1)
            ans.append(3)
            
        if n % 2 == 1:
            ans.append(-1)
        else:
            ans[-1] = 2
        
        print(*ans)

if __name__ == "__main__":
    main()

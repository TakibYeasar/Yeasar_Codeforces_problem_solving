
# Problem link ===>> https://codeforces.com/contest/2128/problem/B

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
    data = input().split()
    idx = 0
    t = int(data[idx])
    idx += 1
    
    for _ in range(t):
        n = int(data[idx])
        idx += 1
        p = list(map(int, data[idx:idx+n]))
        idx += n
        
        l = 0, r = n - 1
        ans = []
        
        for i in range(1, n+1):
            if i %2 ==1:
                take_left = p[l] < p[r]
            else:
                take_left = p[l] > p[r]
            
            if take_left:
                ans.append(p[l])
                l += 1
            else:
                ans.append(p[r])
                r -= 1
        print(" ".join(map(str, ans)) + "\n")
        

if __name__ == "__main__":
    main()

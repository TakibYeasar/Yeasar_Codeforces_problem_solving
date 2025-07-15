
# Problem link ===>> https://codeforces.com/problemset/problem/2121/E

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
        l, r = map(str, input().split())
        
        if l==r:
            print(2*len(l))
            return
        
        ptr =0
        while ptr < len(l) and l[ptr] == r[ptr]:
            ptr += 1
        
        if int(l[ptr]) + 1 < int(r[ptr]):
            print(2 * ptr)
        else:
            res = 2 * ptr + 1
            for i in range(ptr + 1, len(l)):
                if l[i] == '9' and r[i] == '0':
                    res += 1
                else:
                    break
            print(res)

if __name__ == "__main__":
    main()

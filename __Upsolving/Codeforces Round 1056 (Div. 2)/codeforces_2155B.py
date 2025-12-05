
# Problem link ===>> https://codeforces.com/contest/2155/problem/B

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
        
        if(k==n*n-1):
            print("NO")
        else:
            print("YES")
            
            for i in range(n):
                s = ""
                for j in range(n):
                    if (k > 0):
                        s += "U"
                        k -= 1
                    elif (i == n-1 and j == n-1):
                        s += "L"
                    elif (i == n-1):
                        s += "R"
                    else:
                        s += "D"
                print(s)       

if __name__ == "__main__":
    main()

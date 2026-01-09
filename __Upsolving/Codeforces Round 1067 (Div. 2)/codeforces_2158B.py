
# Problem link ===>> https://codeforces.com/contest/2158/problem/B

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
        
        cnt = [0] * (2 * n + 1)
        for x in a:
            cnt[x] += 1

        x = y = z = 0
        for i in range(1, 2 * n + 1):
            if cnt[i] == 0:
                continue
            if cnt[i] % 2 == 1:
                x += 1
            elif cnt[i] % 4 != 0:
                y += 1
            else:
                z += 1

        ans = x + 2 * y + 2 * z

        if (z % 2 == 1) and x == 0:
            ans -= 2

        print(ans)
        

if __name__ == "__main__":
    main()

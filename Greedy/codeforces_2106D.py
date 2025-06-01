
# Problem link ===>> https://codeforces.com/problemset/problem/2106/D

import sys
import math
import bisect
import heapq
from collections import defaultdict, deque, OrderedDict, Counter
from functools import lru_cache, reduce
from itertools import permutations, combinations, accumulate
from typing import List, Tuple, Dict, Set, Optional, Union, Any

MOD = 10**9 + 7
INF = int(1e9 + 5)
input = sys.stdin.read
print = sys.stdout.write

def main():
    data = input().split()
    index = 0
    t = int(data[index])
    index += 1
    
    for _ in range(t):
        n = int(data[index])
        m = int(data[index +1])
        index +=2
        
        a = list(map(int, data[index:index + n]))
        index += n
        b = list(map(int, data[index:index + m]))
        index += m
        
        backward_match = [0] * m
        j = n - 1
        for i in range(m - 1, -1, -1):
            while j >= 0 and a[j] < b[i]:
                j -= 1
            backward_match[i] = j
            j -= 1

        forward_match = [0] * m
        j = 0
        for i in range(m):
            while j < n and a[j] < b[i]:
                j += 1
            forward_match[i] = j
            j += 1

        if forward_match[-1] < n:
            print(0)
            continue

        ans = INF
        for i in range(m):
            match_previous = -1 if i == 0 else forward_match[i - 1]
            match_next = n if i + 1 == m else backward_match[i + 1]
            if match_next > match_previous:
                ans = min(ans, b[i])

        print(-1 if ans == INF else ans)

if __name__ == "__main__":
    main()

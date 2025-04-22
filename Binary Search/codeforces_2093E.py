
# Problem link ===>> https://codeforces.com/problemset/problem/2093/E

import sys
import math
import bisect
import heapq
from bisect import bisect_left
from collections import defaultdict, deque, OrderedDict, Counter
from functools import lru_cache, reduce
from itertools import permutations, combinations, accumulate
from typing import List, Tuple, Dict, Set, Optional, Union, Any

MOD = 10**9 + 7
INF = float('inf')
input = sys.stdin.read
print = sys.stdout.write


def is_ok(v, k, m, nums):
    cnt = 0
    cur_mex = 0

    for i in range(len(v)):
        if v[i] <= len(v) + 1:
            nums[v[i]] = 1

        while cur_mex < len(nums) and nums[cur_mex]:
            cur_mex += 1

        if cur_mex >= m:
            cnt += 1
            for j in range(min(m + 1, len(v) + 2)):
                nums[j] = 0
            cur_mex = 0

    for j in range(len(v) + 2):
        nums[j] = 0

    return cnt >= k
            

def main():
    data = input().split()
    idx = 0
    t = int(data[idx])
    idx += 1
    results = []

    while t > 0:
        t -= 1
        n = int(data[idx])
        idx += 1
        k = int(data[idx])
        idx += 1

        v = list(map(int, data[idx:idx + n]))
        idx += n

        l = 0
        r = int(1e9)
        nums = [0] * (2 * 10**5 + 5)

        while r - l > 1:
            m = (l + r) // 2
            if is_ok(v, k, m, nums):
                l = m
            else:
                r = m

        results.append(str(l))

    print("\n".join(results))

if __name__ == "__main__":
    main()

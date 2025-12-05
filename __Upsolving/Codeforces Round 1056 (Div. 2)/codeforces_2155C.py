
# Problem link ===>> https://codeforces.com/contest/2155/problem/C

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

def validar(x, n, a):
    flag = False
    visibles = 1
 
    for i in range(2, n+1):
        if(x[i] == 1):
            visibles += 1
 
    if(visibles == a[1]):
        flag = True
 
        for i in range(1, n):
            if(x[i] == 1 and x[i+1] == 1):
                visibles -= 1
            elif(x[i] == 0 and x[i+1] == 0):
                visibles += 1
 
            if(a[i+1] != visibles):
                flag = False
                break
 
    return flag

def main():
    t = int(input())
    for _ in range(t):
        sol1 = []
    sol2 = []
    sol1.append(0)
    sol2.append(0)
    sol1.append(0)
    sol2.append(1)
    flag = True
    cont = 0

    n = int(input())
    arr = []
    arr.append(0)
    arr.extend(map(int, input().split()))

    for j in range(1, n):
        if (arr[j+1]-arr[j] > 1):
            flag = False
            break

        if (arr[j+1]-arr[j] == 0):
            sol1.append(1-sol1[j])
            sol2.append(1-sol2[j])
        else:
            sol1.append(sol1[j])
            sol2.append(sol2[j])

    if (not flag):
        print(0)

    if (validar(sol1, n, arr)):
        cont += 1

    if (validar(sol2, n, arr)):
        cont += 1

    print(cont)

if __name__ == "__main__":
    main()

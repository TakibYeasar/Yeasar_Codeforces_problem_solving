# Each test consists of multiple test cases.The first line contains a single integer t(1≤t≤25000) — the number of test cases.
# The description of test cases follows.
# The first line of each test case contains a single integer n(1≤n≤25000) — the number of arrays in the list.
# This is followed by descriptions of the arrays.Each array description consists of two lines.
# The first line contains a single integer mi(2≤mi≤50000) — the number of elements in the i - th array.
# The next line contains mi integers ai, 1, ai, 2,…, ai, mi(1≤ai, j≤109) — the elements of the i - th array.
# It is guaranteed that the sum of mi over all test cases does not exceed 50000 .
# For each test case,output a single line containing a single integer — the maximum beauty of the list of arrays that Olya can achieve.

import sys
from heapq import heappush, heappop


def solve():
    q = int(input())

    overall_min = float('inf')
    min_pairs = []

    for _ in range(q):
        n = int(input())
        a = list(map(int, input().split()))
        pq = []  # Use a list for the priority queue

        for num in a:
            heappush(pq, -num)  # Store negative values for min-heap behavior
            if len(pq) > 2:
                heappop(pq)
            overall_min = min(overall_min, num)

        min_one = -heappop(pq)
        min_two = -heappop(pq)
        min_pairs.append((min_two, min_one))

    sum = 0
    current_min = float('inf')
    for min_two, min_one in min_pairs:
        sum += min_one
        current_min = min(current_min, min_one)

    sum += overall_min
    sum -= current_min
    print(sum)


def main():
    sys.stdin.readline()  # Ignore the first line (number of test cases)
    while True:
        try:
            solve()
        except EOFError:
            break


if __name__ == "__main__":
    main()

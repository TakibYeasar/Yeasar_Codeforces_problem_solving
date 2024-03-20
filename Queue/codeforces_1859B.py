
# Problem link ===>> https://codeforces.com/problemset/problem/1859/B

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

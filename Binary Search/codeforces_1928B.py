
# Problem link ===>> https://codeforces.com/problemset/problem/1928/B

from collections import Counter
from typing import List, Union


def asquare() -> None:
    n = int(input())
    arr: List[int] = list(map(int, input().split()))

    value_counts: Counter[Union[int, None]] = Counter(arr)
    unique_values = sorted(value_counts.keys())

    maximum_distance = 0
    for x in unique_values:
        try:
            distance = value_counts[x + n]
        except KeyError:
            distance = 0
        maximum_distance = max(maximum_distance, distance)

    print(maximum_distance)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        asquare()

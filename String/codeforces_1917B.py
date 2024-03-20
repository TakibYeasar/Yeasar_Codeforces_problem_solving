
# Problem link ===>> https://codeforces.com/problemset/problem/1917/B

import sys


def count_distinct_substrings(word):
    seen_chars = set()
    count = 0
    for char in word:
        seen_chars.add(char)
        count += len(seen_chars)
    return count


if __name__ == "__main__":
    t = int(sys.stdin.readline())
    for _ in range(t):
        length = int(sys.stdin.readline())
        word = sys.stdin.readline().strip()
        result = count_distinct_substrings(word)
        print(result)

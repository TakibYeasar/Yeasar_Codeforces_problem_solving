
# The first line contains one integer t(1≤t≤99) — the number of test cases.
# Each test case consists of one line containing one integer n(2≤n≤100) — the number of integers equal to 1 on the board.
# For each test case,print Alice if Alice wins when both players play optimally.Otherwise, print Bob.

import sys

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        if n >= 5:
            print("Alice")
        else:
            print("Bob")

if __name__ == "__main__":
    main()

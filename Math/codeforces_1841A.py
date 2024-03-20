
# Problem link ===>> https://codeforces.com/problemset/problem/1841/A

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

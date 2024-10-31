
# Problem link ===>> https://codeforces.com/contest/2027/problem/A


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        maxi1 = 0, maxi2 = 0, c1 = 0, c2 = 0
        for _ in range(n):
            a, b = map(int, input().split())
            if a >= maxi1:
                maxi1 = a
                c1 = max(c1, b)
            if b >= maxi2:
                maxi2 = b
                c2 = max(c2, a)
        
        print(2 * (maxi1 + maxi2))


if __name__ == "__main__":
    main()

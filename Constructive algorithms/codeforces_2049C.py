
# Problem link ===>> https://codeforces.com/problemset/problem/2049/C


def main():
    t = int(input())
    for _ in range(t):
        n, x, y = map(int, input().split())
        x -= 1
        y -= 1

        ans = [0] * n
        for i in range(n):
            ans[(x + i) % n] = i % 2

        if n % 2 != 0 or (x - y) % 2 == 0:
            ans[x] = 2

        print(' '.join(map(str, ans)))
        


if __name__ == "__main__":
    main()

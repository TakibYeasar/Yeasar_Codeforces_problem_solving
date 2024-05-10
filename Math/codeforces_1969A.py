
# Problem link ===>> https://codeforces.com/problemset/problem/1969/A


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())

        v = list(map(int, input().split()))

        ans = 3
        for i in range(n):
            if i == v[v[i-1]-1]:
                ans = 2
                break

        print(ans)

if __name__ == "__main__":
    main()

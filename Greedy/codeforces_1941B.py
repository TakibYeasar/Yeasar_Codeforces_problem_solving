
# Problem link ===>> https://codeforces.com/problemset/problem/1941/B

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = [int(x) for x in input().split()]
        for i in range(n - 2):
            if a[i] < 0:
                print('NO')
                return
            op = a[i]
            a[i] -= op
            a[i + 1] -= 2 * op
            a[i + 2] -= op
        if a[-1] != 0 or a[-2] != 0:
            print('NO')
        else:
            print('YES')


if __name__ == "__main__":
    main()

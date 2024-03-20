
# Problem link ===>> https://codeforces.com/problemset/problem/1941/D

def asquare():
    n, m, x = map(int, input().split())
    v = list(map(int, input().split()))
    ch = list(input().split())

    ans = {x}
    res = set()

    for i in range(m):
        if ch[i] == '0':
            tans = set()
            for it in ans:
                a = it + v[i]
                if a > n:
                    a -= n
                tans.add(a)
                if i == m - 1:
                    res.add(a)
            ans = tans
        elif ch[i] == '1':
            tans = set()
            for it in ans:
                a = it - v[i] + n
                if a > n:
                    a -= n
                tans.add(a)
                if i == m - 1:
                    res.add(a)
            ans = tans
        else:
            tans = set()
            for it in ans:
                a = it + v[i]
                if a > n:
                    a -= n
                tans.add(a)
                if i == m - 1:
                    res.add(a)
                a = it - v[i] + n
                if a > n:
                    a -= n
                tans.add(a)
                if i == m - 1:
                    res.add(a)
            ans = tans

    print(len(res))
    print(*res)


def main():
    t = int(input())
    for _ in range(t):
        asquare()


if __name__ == "__main__":
    main()

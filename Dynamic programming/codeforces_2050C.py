
# Problem link ===>> https://codeforces.com/problemset/problem/2050/C


def main():
    t = int(input())
    for _ in range(t):
        s = [int(x) for x in list(input())]

        sm = sum(s)
        tows = s.count(2)
        threes = s.count(3)

        for i in range(min(10, tows+1)):
            for j in range(min(10, threes+1)):
                if (sm + i * 2 + j * 6) % 9 == 0:
                    print("YES")
                    return
        print("NO")


if __name__ == "__main__":
    main()

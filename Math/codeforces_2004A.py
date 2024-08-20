
# Problem link ===>> https://codeforces.com/contest/2004/problem/A


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        x = list(map(int, input().split()))
        if n > 2 or x[0] + 1 == x[-1]:
            print('NO')
        else:
            print('YES')
        


if __name__ == "__main__":
    main()

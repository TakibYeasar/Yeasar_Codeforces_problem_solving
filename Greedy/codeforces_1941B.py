
# Problem link ===>> https://codeforces.com/problemset/problem/1941/B

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))

        for i in range(n - 2):
            if a[i] == 0:
                continue
            elif a[i] < 0:
                print("NO")
                break
            else:
                a[i + 1] -= 2 * a[i]
                a[i + 2] -= a[i]
        else:
            if a[n - 2] == 0 and a[n - 1] == 0:
                print("YES")
            else:
                print("NO")


if __name__ == "__main__":
    main()

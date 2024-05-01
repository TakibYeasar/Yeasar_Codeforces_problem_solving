
# Problem link ===>> https://codeforces.com/problemset/problem/1948/B

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))

        curr = 0
        is_valid = False

        for i in range(n):
            if a[i] < curr:
                print("NO")
                is_valid = True
                break
            else:
                x = a[i] // 10
                y = a[i] % 10
                if x >= curr:
                    if y >= x:
                        curr = y
                    else:
                        curr = a[i]
                else:
                    curr = a[i]

        if not is_valid:
            print("YES")
        


if __name__ == "__main__":
    main()

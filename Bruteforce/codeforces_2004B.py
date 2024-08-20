
# Problem link ===>> https://codeforces.com/contest/2004/problem/B


def main():
    t = int(input())
    for _ in range(t):
        a, b, x,y = map(int, input().split())
        
        l = max(a, x)
        r = min(b, y)

        L = min(a, x)
        R = max(b, y)

        if r < l:
            print(1)
        elif r == l:
            print(2)
        else:
            ans = 0

            if L < l:
                ans += 1
            if r < R:
                ans += 1

            ans += (r - l)
            print(ans)
        


if __name__ == "__main__":
    main()


# Problem link ===>> https://codeforces.com/problemset/problem/1941/C

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input().strip()
        ans = 0
        i = 0
        while i < n:
            if i <= n - 5 and s[i:i+5] == "mapie":
                ans += 1
                i += 5
            elif i <= n - 3 and (s[i:i+3] == "map" or s[i:i+3] == "pie"):
                ans += 1
                i += 3
            else:
                i += 1
        print(ans)


if __name__ == "__main__":
    main()

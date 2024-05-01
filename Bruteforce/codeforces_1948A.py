
# Problem link ===>> https://codeforces.com/problemset/problem/1948/A

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        if n%2 ==1:
            print("NO")
        else:
            print("YES")
            ans = ""
            for i in range(n // 2):
                ans += "BAA"
            print(ans)

if __name__ == "__main__":
    main()

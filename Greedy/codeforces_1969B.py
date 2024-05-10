
# Problem link ===>> https://codeforces.com/problemset/problem/1969/B


def main():
    t = int(input())
    for _ in range(t):
        s = str(input())

        ans = 0
        x = 0
        for char in s:
            if char == '1':
                x += 1
            else:
                if x > 0:
                    ans += (x + 1)
                x = 0
            
        print(ans)

if __name__ == "__main__":
    main()

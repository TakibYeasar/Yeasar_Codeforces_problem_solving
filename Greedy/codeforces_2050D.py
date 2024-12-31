
# Problem link ===>> https://codeforces.com/problemset/problem/2050/D


def main():
    s = input()
    n = len(s)
    s = list(s)  # Convert string to list for mutability

    for i in range(1, n):
        for x in range(i, 0, -1):
            if ord(s[x]) >= ord(s[x - 1]) + 2:
                s[x] = chr(ord(s[x]) - 1)
                s[x], s[x - 1] = s[x - 1], s[x]
            else:
                break  # optimization to avoid unnecessary checks

    print("".join(s))  # Convert list back to string

if __name__ == "__main__":
    main()

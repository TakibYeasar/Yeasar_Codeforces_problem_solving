
# Problem link ===>> https://codeforces.com/problemset/problem/####/A


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        st = set(range(1, n + 1))

    while st:
        print(min(st), end=" ")
        st.remove(min(st))

        if st:
            print(max(st), end=" ")
            st.remove(max(st))

        print()
        


if __name__ == "__main__":
    main()

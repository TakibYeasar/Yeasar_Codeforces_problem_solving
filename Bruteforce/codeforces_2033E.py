
# Problem link ===>> https://codeforces.com/problemset/problem/2033/E


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        p = list(map(int, input().split()))

        visited = [False] * (n + 1)
        result = 0

        for i in range(1, n + 1):
            if not visited[i]:
                cycle_length = 0
                current = i
                while not visited[current]:
                    visited[current] = True
                    current = p[current]
                    cycle_length += 1
                result += (cycle_length - 1) // 2

        print(result)


if __name__ == "__main__":
    main()

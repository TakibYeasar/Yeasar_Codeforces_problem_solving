
# Problem link ===>> https://codeforces.com/problemset/problem/2004/D


def main():
    t = int(input())
    while t > 0:
        t -= 1

        n, q = map(int, input().split())

        a = []
        for i in range(n):
            a.append(input().strip())

        left = [[-1] * 6 for _ in range(n)]
        right = [[-1] * 6 for _ in range(n)]

        ind = {
            "BG": 0, "BR": 1, "BY": 2,
            "GR": 3, "GY": 4, "RY": 5
        }

        colors = ["BG", "BR", "BY", "GR", "GY", "RY"]

        mp = {}

        for i in range(n):
            mp[ind[a[i]]] = i
            for ch in range(6):
                left[i][ch] = mp.get(ch, -1)

        mp.clear()

        for i in range(n - 1, -1, -1):
            mp[ind[a[i]]] = i
            for ch in range(6):
                right[i][ch] = mp.get(ch, -1)

        for _ in range(q):
            x, y = map(int, input().split())
            x -= 1
            y -= 1

            if x > y:
                x, y = y, x

            color_x = a[x]
            color_y = a[y]

            if (color_x[0] == color_y[0] or color_x[1] == color_y[0] or
                    color_x[0] == color_y[1] or color_x[1] == color_y[1]):
                print(abs(x - y))
            else:
                checks = [ch for ch in colors if ch !=
                          color_x and ch != color_y]
                ans = float('inf')

                for ch in checks:
                    possible_indexes = []

                    if left[x][ind[ch]] != -1:
                        possible_indexes.append(left[x][ind[ch]])
                    if right[x][ind[ch]] != -1:
                        possible_indexes.append(right[x][ind[ch]])
                    if left[y][ind[ch]] != -1:
                        possible_indexes.append(left[y][ind[ch]])
                    if right[y][ind[ch]] != -1:
                        possible_indexes.append(right[y][ind[ch]])

                    for it in possible_indexes:
                        dist = abs(x - it) + abs(y - it)
                        ans = min(ans, dist)

                if ans == float('inf'):
                    print(-1)
                else:
                    print(ans)


if __name__ == "__main__":
    main()

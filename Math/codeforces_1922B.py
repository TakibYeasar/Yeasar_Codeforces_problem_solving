
# Problem link ===>> https://codeforces.com/problemset/problem/1922/B

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = [0] * (n + 1)
        for _ in range(n):
            freq = int(input())
            arr[freq] += 1

        fact = 0
        prev = 0
        for i in range(n + 1):
            if arr[i] >= 3:
                mid = (arr[i] * (arr[i] - 1) * (arr[i] - 2)) // 6
                fact += mid
            if arr[i] >= 2:
                mid = (arr[i] * (arr[i] - 1)) // 2
                fact += mid * prev
            prev += arr[i]

        print(fact)


if __name__ == "__main__":
    main()

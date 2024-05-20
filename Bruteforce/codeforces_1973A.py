
# Problem link ===>> https://codeforces.com/problemset/problem/1973/A


def main():
    t = int(input())
    for _ in range(t):
        p1, p2, p3 = map(int, input().split())

        if p1 > p2 or p2 > p3:
            print("-1")
            continue

        sum_of_three = p1 + p2 + p3
        if sum_of_three % 2 != 0:
            print("-1")
        else:
            min_pair_sum = min(p1 + p2, sum_of_three // 2)
            print(min_pair_sum)
        

if __name__ == "__main__":
    main()

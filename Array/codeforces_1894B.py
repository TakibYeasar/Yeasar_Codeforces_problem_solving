
# Problem link ===>> https://codeforces.com/problemset/problem/1894/B?locale=en

def solve():
    n = int(input())
    arr = list(map(int, input().split()))

    freq = {}
    for num in arr:
        freq[num] = freq.get(num, 0) + 1

    frequent_nums = [num for num, count in freq.items() if count > 1]

    if len(frequent_nums) < 2:
        print(-1)
        return

    for num in arr:
        if num == frequent_nums[0]:
            print(2, end=" ")
            frequent_nums[0] = None  # Mark as used
        elif num == frequent_nums[1]:
            print(3, end=" ")
            frequent_nums[1] = None  # Mark as used
        else:
            print(1, end=" ")

    print()


def main():
    t = int(input())
    while t > 0:
        solve()
        t -= 1


if __name__ == "__main__":
    main()

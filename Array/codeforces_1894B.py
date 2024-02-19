# Each test contains multiple test cases.The first line contains a single integer t(1≤t≤500)
# — the number of test cases.Each test case is described as follows.
# The first line of each test case contains an integer n(1≤n≤100) — the length of the array a.
# The second line of each test case contains n integers a1, a2,…, an(1≤ai≤100) — the elements of the array a.
# For each test case, print - 1 if there is no solution.Otherwise, print b1, b2,…, bn
# — an array consisting of numbers 1, 2, 3 that satisfies exactly two out of three conditions.
# If there are multiple possible answers, you can print any of them.

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

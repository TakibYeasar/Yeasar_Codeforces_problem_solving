# Please note that the time limit for this problem is only 0.5 seconds per test.
# Vladislav wrote the integers from 1 to n, inclusive, on the board. Then he replaced each integer with the sum of its digits.
# What is the sum of the numbers on the board now?

# For example, if n=12 then initially the numbers on the board are: 1,2,3,4,5,6,7,8,9,10,11,12.
# Then after the replacement, the numbers become: 1,2,3,4,5,6,7,8,9,1,2,3.
# The sum of these numbers is 1+2+3+4+5+6+7+8+9+1+2+3=51. Thus, for n=12 the answer is 51.

# Input
# The first line contains an integer t (1≤t≤104) — the number of test cases.

# The only line of each test case contains a single integer n (1≤n≤2⋅105) — the largest number Vladislav writes.

# Output
# For each test case, output a single integer — the sum of the numbers at the end of the process.

def get_sum(x):
    res = 0
    while x > 0:
        if dp[x] > 0:
            res += dp[x]
            break
        res += x % 10
        x //= 10
    return res


def test_case(tc):
    n = int(input())
    print(dp[n])


def main():
    T = int(input())
    dp = [0] * maxN
    for i in range(1, maxN):
        dp[i] = get_sum(i)
    for i in range(1, maxN):
        dp[i] += dp[i - 1]

    for tc in range(1, T + 1):
        test_case(tc)


if __name__ == "__main__":
    maxN = 2 * 10**5 + 1
    main()

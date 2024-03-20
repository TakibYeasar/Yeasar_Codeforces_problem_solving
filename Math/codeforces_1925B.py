
# Problem link ===>> https://codeforces.com/problemset/problem/1925/B

import math

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)


def solve(x, n):

    # Calculate all possible divisors of x, handling potential overflow using math.sqrt and int():
    divisors = [i for i in range(1, int(math.sqrt(x)) + 1) if x % i == 0]
    divisors.extend([x // i for i in divisors if i * i != x])

    # Sort divisors in descending order:
    divisors.sort(reverse=True)

    # Find the first divisor that can be used to create n sub-problems:
    max_balance = 0
    for divisor in divisors:
        if n <= x // divisor:  # Check if n is less than or equal to x divided by divisor
            max_balance = divisor
            break

    return max_balance


def main():
    # Read the number of test cases:
    t = int(input())

    for _ in range(t):
        # Read the difficulty x and the number of sub-problems n:
        x, n = map(int, input().split())

        # Call the solve function and print the result:
        result = solve(x, n)
        print(result)


if __name__ == "__main__":
    main()

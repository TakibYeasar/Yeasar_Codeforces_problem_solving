# Jay managed to create a problem of difficulty x and decided to make it the second problem for Codeforces Round #921.

# But Yash fears that this problem will make the contest highly unbalanced, and the coordinator will reject it. 
# So, he decided to break it up into a problemset of n
# sub-problems such that the difficulties of all the sub-problems are a positive integer and their sum is equal to x.

# The coordinator, Aleksey, defines the balance of a problemset as the GCD of the difficulties of all sub-problems in the problemset.

# Find the maximum balance that Yash can achieve if he chooses the difficulties of the sub-problems optimally.

# Input
# The first line of input contains a single integer t (1≤t≤103) denoting the number of test cases.

# Each test case contains a single line of input containing two integers x (1≤x≤108) and n (1≤n≤x).

# Output
# For each test case, print a single line containing a single integer denoting the maximum balance of the problemset Yash can achieve.

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

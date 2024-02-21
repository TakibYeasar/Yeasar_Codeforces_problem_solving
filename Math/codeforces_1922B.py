# You have n sticks, numbered from 1 to n. The length of the i-th stick is 2ai.

# You want to choose exactly 3 sticks out of the given n sticks, and form a non-degenerate triangle out of them, 
# using the sticks as the sides of the triangle. A triangle is called non-degenerate if its area is strictly greater than 0.

# You have to calculate the number of ways to choose exactly 3 sticks so that a triangle can be formed out of them. 
# Note that the order of choosing sticks does not matter (for example, choosing the 1-st, 2-nd and 4-th stick is the 
# same as choosing the 2-nd, 4-th and 1-st stick).

# Input
# The first line contains one integer t (1≤t≤104) — the number of test cases.

# Each test case consists of two lines:
# the first line contains one integer n (1≤n≤3⋅105);
# the second line contains n integers a1,a2,…,an (0≤ai≤n).
# Additional constraint on the input: the sum of n over all test cases does not exceed 3⋅105.

# Output
# For each test case, print one integer — the number of ways to choose exactly 3 sticks so that a triangle can be formed out of them.

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

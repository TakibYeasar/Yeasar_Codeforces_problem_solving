
# Problem link ===>> https://codeforces.com/problemset/problem/2050/B


def main():
    t = int(input())  # Number of test cases
    for _ in range(t):
        n = int(input())  # Size of the array
        a = list(map(int, input().split()))  # Read the array

        odd_sum = 0
        even_sum = 0

        # Calculate sums for odd and even indices
        for i in range(n):
            if i % 2 == 0:
                even_sum += a[i]
            else:
                odd_sum += a[i]

        # Calculate counts of odd and even indices
        odd_count = n // 2  # Number of odd indices
        even_count = (n + 1) // 2  # Number of even indices

        # Check divisibility and equality of averages
        if (odd_sum % odd_count != 0 or even_sum % even_count != 0 or
                odd_sum // odd_count != even_sum // even_count):
            print("NO")
        else:
            print("YES")


if __name__ == "__main__":
    main()

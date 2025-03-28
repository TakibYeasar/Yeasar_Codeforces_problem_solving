
# Problem link ===>> https://codeforces.com/group/isP4JMZTix/contest/379072/problem/E
import sys
import bisect


def main():
    # Read the number of items in the price list
    n = int(sys.stdin.readline().strip())

    # Read the price list and sort it
    price_list = list(map(int, sys.stdin.readline().split()))
    price_list.sort()

    # Read the number of queries
    q = int(sys.stdin.readline().strip())

    # Process each query
    for _ in range(q):
        m = int(sys.stdin.readline().strip())  # Read the price limit

        # Find the number of items that cost less than or equal to m
        count = bisect.bisect_right(price_list, m)

        # Print the result
        print(count)


if __name__ == "__main__":
    main()


# Problem link ===>> https://codeforces.com/problemset/problem/1915/F

# def main():
#     t = int(input())

#     while t > 0:
#         t -= 1
#         n = int(input())

#         ab_array = []
#         array_two = []
#         for i in range(n):
#             a, b = map(int, input().split())
#             ab_array.append((a, b))
#             array_two.append(b)

#         ab_array.sort()
#         array_two.sort()

#         ans = 0
#         j = 0
#         for a, b in ab_array:
#             while j < n and array_two[j] < b:
#                 count += 1
#                 j += 1
#             ans += count

#         print(ans)

# if __name__ == "__main__":
#     main()

import bisect


def main():
    t = int(input())

    while t > 0:
        t -= 1
        n = int(input())

        v = []  # List to store pairs (a, b)
        y_coordinates = []  # List to store y-coordinates for counting
        for _ in range(n):
            a, b = map(int, input().split())
            v.append((a, b))
            y_coordinates.append(b)  # Add to y_coordinates initially

        v.sort()  # Sort based on the first element (a)

        ans = 0
        for a, b in v:
            # Find insertion index efficiently
            index = bisect.bisect_left(y_coordinates, b)
            ans += index
            y_coordinates.pop(index)  # Remove the found element

        print(ans)


if __name__ == "__main__":
    main()

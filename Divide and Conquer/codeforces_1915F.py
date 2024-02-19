# There are n people on the number line; the i -th person is at point ai and wants to go to point bi.
# For each person, ai<bi, and the starting and ending points of all people are distinct. (That is, all of the 2n
# numbers a1,a2,…,an,b1,b2,…,bn are distinct.)
# All the people will start moving simultaneously at a speed of 1 unit per second until they reach their final point bi.
# When two people meet at the same point, they will greet each other once. How many greetings will there be?
# Note that a person can still greet other people even if they have reached their final point.
# Input
# The first line of the input contains a single integer t (1≤t≤104) — the number of test cases. The description of test cases follows.
# The first line of each test case contains a single integer n (1≤n≤2⋅105) — the number of people.
# Then n lines follow, the i-th of which contains two integers ai and bi (−109≤ai<bi≤109) — the starting and ending positions of each person.
# For each test case, all of the 2n numbers a1,a2,…,an,b1,b2,…,bn are distinct.
# The sum of n over all test cases does not exceed 2⋅105.
# Output
# For each test case, output a single integer denoting the number of greetings that will happen.

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

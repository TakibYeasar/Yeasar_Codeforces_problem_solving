
# The first line contains one integer t(1≤t≤104) — the number of test cases.
# Each test case consists of two lines.The first line contains one integer q(1≤q≤2⋅105) — the number of queries.
# The second line contains q integers x1,x2,…, xq(0≤xi≤109).
# Additional constraint on the input: the sum of q over all test cases does not exceed 2⋅105).
# For each test case, print one string consisting of exactly q characters. The i-th character of the string
# should be 1 if you appended the integer during the i-th query; otherwise, it should be 0.

t = int(input())

for _ in range(t):
    n = int(input())
    flag = 0
    first = -1
    last = -1

    for _ in range(n):
        num = int(input())

        if flag:
            if num >= last and num <= first:
                last = num
                print(1, end="")
            else:
                print(0, end="")
        else:
            if first == -1:
                first = num
                last = num
                print(1, end="")
            elif num >= last:
                last = num
                print(1, end="")
            elif first >= num:
                last = num
                flag = 1
                print(1, end="")
            else:
                print(0, end="")

    print()


# Problem link ===>> https://codeforces.com/problemset/problem/1841/B

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

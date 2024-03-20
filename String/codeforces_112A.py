
# Problem link ===>> https://codeforces.com/problemset/problem/112/A

str1 = input().lower()
str2 = input().lower()

result = 0

if str1 < str2:
    result = -1
elif str1 > str2:
    result = 1

print(result)


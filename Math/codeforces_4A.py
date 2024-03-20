
# Problem link ===>>  https://codeforces.com/problemset/problem/4/A

weight = int(input())

# Check if the weight can be divided into two even parts
# and both parts are greater than 1
if weight % 2 == 0 and weight > 2:
    print("YES")
else:
    print("NO")


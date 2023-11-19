
# The first(and the only) input line contains integer number w(1 ≤ w ≤ 100) — the weight of the watermelon bought
# by the boys. Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos;
# and NO in the opposite case.

weight = int(input())

# Check if the weight can be divided into two even parts
# and both parts are greater than 1
if weight % 2 == 0 and weight > 2:
    print("YES")
else:
    print("NO")



# The first line contains three positive integers k, n, w(1  ≤  k, w  ≤  1000, 0 ≤ n ≤ 109), the cost of the first banana,
# initial number of dollars the soldier has and number of bananas he wants.
# Output one integer — the amount of dollars that the soldier must borrow from his friend.If he doesn't have to borrow money, output 0.

k, n, w = map(int, input().split())

cost = 0
for i in range(1, w+1):
    cost += i * k

borrowed = cost - n

if borrowed <= 0:
    print(0)
else:
    print(borrowed)



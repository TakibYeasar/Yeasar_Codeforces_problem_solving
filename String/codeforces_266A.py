
# The first line contains integer n(1 ≤ n ≤ 50) — the number of stones on the table.
# The next line contains string s, which represents the colors of the stones.We 'll consider the
# stones in the row numbered from 1 to n from left to right. Then the i-th character s equals "R",
# if the i-th stone is red, "G", if it' s green and "B", if it's blue.
# Print a single integer — the answer to the problem.

n = int(input())
stones = input()

count = 0
for i in range(1, n):
    if stones[i] == stones[i - 1]:
        count += 1

print(count)



# In a single line you are given two integers M and N — board sizes in squares(1 ≤ M ≤ N ≤ 16).
# Output one number — the maximal number of dominoes,which can be placed.

m, n = map(int, input().split())

#  Calculate the number of dominoes that can be placed
area = m * n
dominoes = area / 2

print(dominoes)

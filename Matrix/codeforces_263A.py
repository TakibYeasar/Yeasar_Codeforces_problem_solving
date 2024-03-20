
# Problem link ===>> https://codeforces.com/problemset/problem/263/A

matrix = []
row, col = 0, 0

# Read the matrix
for i in range(5):
    row_values = list(map(int, input().split()))
    matrix.append(row_values)

    # Check if the current row contains 1
    if 1 in row_values:
        row = i
        col = row_values.index(1)

# Calculate the minimum number of moves to center
moves = abs(row - 2) + abs(col - 2)

# Output the result
print(moves)


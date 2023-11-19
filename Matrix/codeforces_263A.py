
# The input consists of five lines, each line contains five integers : the j - th integer in the i - th line of the input
# represents the element of the matrix that is located on the intersection of the i - th row and the j - th column.It is
# guaranteed that the matrix consists of 24 zeroes and a single number one.
# Print a single integer — the minimum number of moves needed to make the matrix beautiful.

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


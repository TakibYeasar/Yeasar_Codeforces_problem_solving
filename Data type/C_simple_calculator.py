# Python solution for calculating and printing sum, product, and difference

# Read two space-separated numbers from input
X, Y = map(int, input().split())

# Calculate sum, product, and difference
summation = X + Y
multiplication = X * Y
subtraction = X - Y

# Print results with appropriate formatting
print(f"{X} + {Y} = {summation}")
print(f"{X} * {Y} = {multiplication}")
print(f"{X} - {Y} = {subtraction}")

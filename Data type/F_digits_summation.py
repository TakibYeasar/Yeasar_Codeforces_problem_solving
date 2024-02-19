# Read two space-separated numbers from input
n, m = map(int, input().split())

# Extract last digits using modulo operator (%)
n_last_digit = n % 10
m_last_digit = m % 10

# Calculate and print the sum of last digits
sum_of_last_digits = n_last_digit + m_last_digit
print(sum_of_last_digits)

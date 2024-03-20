
# Problem link ===>> https://codeforces.com/problemset/problem/339/A

s = input()

# Remove the '+' characters from the string
s = s.replace('+', '')

# Sort the string in non-decreasing order
sorted_s = sorted(s)

# Join the sorted characters with '+'
result = '+'.join(sorted_s)

# Output the modified string
print(result)


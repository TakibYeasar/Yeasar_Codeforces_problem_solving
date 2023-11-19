
# The first line contains a non - empty string s — the sum Xenia needs to count.String s contains no spaces.It only contains
# digits and characters "+".Besides, string s is a correct sum of numbers 1, 2 and 3. String s is at most 100 characters long.
# Print the new sum that Xenia can count.

s = input()

# Remove the '+' characters from the string
s = s.replace('+', '')

# Sort the string in non-decreasing order
sorted_s = sorted(s)

# Join the sorted characters with '+'
result = '+'.join(sorted_s)

# Output the modified string
print(result)


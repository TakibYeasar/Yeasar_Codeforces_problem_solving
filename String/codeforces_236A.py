
# Problem link ===>> https://codeforces.com/problemset/problem/236/A

username = input()

# Use a set to count the unique characters
distinct_chars = set(username)

# Check if the number of distinct characters is odd
if len(distinct_chars) % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")


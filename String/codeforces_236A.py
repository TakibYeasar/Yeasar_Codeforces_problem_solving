
# The first line contains a non - empty string, that contains only lowercase English letters — the user name.
# This string contains at most 100 letters. If it is a female by our hero's method, print "CHAT WITH HER!"
# (without the quotes), otherwise, print "IGNORE HIM!" (without the quotes).

username = input()

# Use a set to count the unique characters
distinct_chars = set(username)

# Check if the number of distinct characters is odd
if len(distinct_chars) % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")


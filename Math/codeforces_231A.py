
# Problem link ===>> https://codeforces.com/problemset/problem/231/A

# Read number of problems
n = int(input())

# Count the number of implemented problems
problems = 0

# Iterate for each problem
for i in range(n):
    # Read if the input data for each problem
    friends = input().split()
    # If two of more of the friends are sure about the problem implement it
    if friends.count("1") >= 2:
        problems += 1
        
print(problems)


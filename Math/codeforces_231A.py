
# The first input line contains a single integer n(1 ≤ n ≤ 1000) — the number of problems in the contest.
# Then n lines contain three integers each, each integer is either 0 or 1. If the first number in the line equals 1,
# then Petya is sure about the problem 's solution, otherwise he isn' t sure.The second number shows Vasya
# 's view on the solution, the third number shows Tonya' s view.The numbers on the lines are separated by spaces.
# Print a single integer — the number of problems the friends will implement on the contest.

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



# The first line of the input contains an integer x(1 ≤ x ≤ 1 000 000) — The coordinate of the friend's house.
# Print the minimum number of steps that elephant needs to make to get from point 0 to point x.

x = int(input())

steps = (x + 4) // 5  # Using integer division to round up

print(steps)



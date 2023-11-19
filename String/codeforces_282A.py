
# The first line contains a single integer n(1 ≤ n ≤ 150) — the number of statements in the programme.
# Next n lines contain a statement each.Each statement contains exactly one operation(++ or --) and
# exactly one variable x(denoted as letter «X»).Thus,there are no empty statements.The operation and the variable can be
# written in any order.
# Print a single integer — the final value of x.

n = int(input())

x = 0
for _ in range(n):
    statement = input()

    if "++" in statement:
        x += 1
    else:
        x -= 1

print(x)


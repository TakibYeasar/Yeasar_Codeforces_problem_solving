
# The only line of the input contains two integers a and b(1 ≤ a ≤ b ≤ 10) — the weight of Limak and the weight of Bob respectively.
# Print one integer,denoting the integer number of years after which Limak will become strictly larger than Bob.

a, b = map(int, input().split())

years = 0
while a <= b:
    a *= 3
    b *= 2
    years += 1

print(years)


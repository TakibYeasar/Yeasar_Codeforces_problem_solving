
# The first line of the input contains two integers n and k (1 ≤ k ≤ n ≤ 50) separated by a single space.
# The second line contains n space-separated integers a1, a2, ..., an (0 ≤ ai ≤ 100), where ai is the score
# earned by the participant who got the i-th place. The given sequence is non-increasing (that is, for all i
# from 1 to n - 1 the following condition is fulfilled: ai ≥ ai + 1).
# Output the number of participants who advance to the next round.

n, k = map(int, input().split())
scores = list(map(int, input().split()))

count = 0
k_score = scores[k - 1]

for score in scores:
    if score >= k_score and score > 0:
        count += 1

print(count)


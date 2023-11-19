#
#     The first line contains one integer t(1≤t≤100) — the number of test cases.
#
#     The first line of each test case contains one integer n(2≤n≤100) — the number of athletes.Then n
#     lines follow,
#     the i
#         - th of them contains two integers si and ei(1≤si≤109; 1≤ei≤100) — the strength and the endurance of the i
#         - th athlete.
#
# For each test case, print the answer as follows: if the answer exists, print one integer — the value of
# w meeting the constraints.The integer you print should satisfy 1≤w≤109 .It can be shown that if the answer exists,
# at least one such value of w exists as well.If there are multiple answers, you can print any of them;
# otherwise, print one integer −1.

def solve(n, k):
    if n % k != 0:
        return -1

    groups = n // k
    groups_with_extra = groups // 2 + 1

    if groups_with_extra > k:
        return -1

    scores = [0] * n
    for i in range(0, n, k):
        if i < groups_with_extra * k:
            scores[i:i+k] = list(range(groups - groups_with_extra + 1, -1, -1))
        else:
            scores[i:i+k] = list(range(groups_with_extra, 0, -1))

    return scores

if __name__ == '__main__':
    n = int(input())
    k = int(input())

    scores = solve(n, k)

    if scores == -1:
        print(-1)
    else:
        print(' '.join(map(str, scores)))

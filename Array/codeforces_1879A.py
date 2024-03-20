
# Problem link ===>> https://codeforces.com/problemset/problem/1879/A

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

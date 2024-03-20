
# Problem link ===>>  https://codeforces.com/problemset/problem/1837/C

t = int(input())
for _ in range(t):
    s = input()
    l = len(s)
    r = [''] * (l + 1)

    if s[0] == '?':
        r[0] = '0'
    else:
        r[0] = s[0]

    for i in range(1, l):
        if s[i] == '?':
            r[i] = r[i-1]
        else:
            r[i] = s[i]

    r[l] = ''
    print(''.join(r))

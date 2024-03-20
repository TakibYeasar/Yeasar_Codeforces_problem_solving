
# Problem link ===>> https://codeforces.com/problemset/problem/1919/C?locale=en

def solve():
    n = int(input())
    values = list(map(int, input().split()))
    
    penalty = 0
    sl = float('inf')
    tl = float('inf')
    
    for val in values:
        if sl > tl:
            sl, tl = tl, sl

        if val <= sl:
            sl = val
        elif val <= tl:
            tl = val
        else:
            sl = val
            penalty += 1

    print(penalty)


def main():
    t = int(input())
    while t > 0:
        solve()
        t -= 1


if __name__ == "__main__":
    main()

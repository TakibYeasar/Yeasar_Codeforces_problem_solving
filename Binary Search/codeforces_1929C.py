
# Problem link ===>> https://codeforces.com/problemset/problem/1929/C

def main():
    t = int(input())

    for _ in range(t):
        k, x, a = map(int, input().split())

        aa = a
        curr = 1

        for _ in range(1, x):
            next_num = (curr // (k - 1)) + 1
            curr += next_num

            if curr > a:
                print("NO")
                break

        a -= curr
        if a < 0:
            print("NO")
        else:
            a *= k
            if a > aa:
                print("YES")
            else:
                print("NO")
    

if __name__ == "__main__":
    main()

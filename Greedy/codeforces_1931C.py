
# Problem link ===>> https://codeforces.com/problemset/problem/1931/C

def main():
    t = int(input())
    for _ in range(t):
        n= int(input())
        a = list(map(int, input().splite()))
        
        left = 1
        right = 1
        for i in range(1, n):
            if a[i] != a[i-1]:
                break;
            right +=1
        
        for i in range(n - 2, -1, -1):
            if a[i] != a[i + 1]:
                break
            right += 1
        
        sum = 0
        if a[0] == a[n - 1]:
            sum = min(n, left + right)
        else:
            sum = min(n, max(left, right))

        print(n - sum)

if __name__ == "__main__":
    main()

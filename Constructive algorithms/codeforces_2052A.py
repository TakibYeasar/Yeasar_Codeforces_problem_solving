
# Problem link ===>> https://codeforces.com/problemset/problem/2052/A


def main():
    n = int(input())
    a = [0] + list(map(int, input().split())) # 1-based indexing
    
    ans = []
    
    # Ascending sort and record overtakes
    for i in range(1, n+1):
        for j in range(1, n):
            if a[j] < a[j+1]:
                a[j], a[j+1] = a[j+1], a[j]
                ans.append((a[j], a[j+1]))
    
    # Descending sort and record overtakes
    for i in range(1, n+1):
        for j in range(1, n):
            if a[j] > a[j+1]:
                a[j], a[j + 1] = a[j + 1], a[j]
                ans.append((a[j], a[j + 1]))
    
    ans.reverse()

    print(len(ans))
    for x, y in ans:
        print(y, x)  # Note the order: y x
        


if __name__ == "__main__":
    main()

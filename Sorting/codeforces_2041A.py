
# Problem link ===>> https://codeforces.com/problemset/problem/2041/A


def main():
    t = int(input())
    for _ in range(t):
        a, b, c, d = map(int, input().split())
        
        visited = [a, b, c, d]
        visited.sort()
        
        for i in range(1, 6):
            if i not in visited:
                print(i)
                break
        
        
if __name__ == "__main__":
    main()

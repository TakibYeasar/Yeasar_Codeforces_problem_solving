
# Problem link ===>> https://codeforces.com/problemset/problem/1985/F

import heapq

def main():
    t = int(input())
    for _ in range(t):
        h, n = map(int, input().split())
        a = list(map(int, input().split()))
        c = list(map(int, input().split()))
        
        heap = [(1, i) for i in range(n)]
        heapq.heapify(heap)

        last_turn = 1

        while h > 0:
            turn, index = heapq.heappop(heap)

            if turn > last_turn:
                last_turn = turn

            h -= a[index]
            if h <= 0:
                print(last_turn)
                break

            heapq.heappush(heap, (turn + c[index], index))
        


if __name__ == "__main__":
    main()


# Problem link ===>> https://codeforces.com/problemset/problem/2063/C


import sys

def main():
    input = sys.stdin .readline
    for _ in range(int(int().strip())):
        n = int(input().strip())
        
        deg = [0] * n
        adj = [[] for _ in range(n)]
        
        for _ in range(n-1):
            u, v = map(int, input().split())
            u -= 1
            v -= 1
            deg[u] += 1
            deg[v] += 1
            adj[u].append(v)
            adj[v].append(u)
            
        max_result = 0
        sorted_deg = sorted(deg, reverse=True)
        
        for i in range(n):
            node_deg = deg[i]
            neigh_deg = [deg[v] for v in adj[i]]
            neigh_deg.append(node_deg)
            neigh_deg.sort(reverse=True)
            
            max_neigh = -1
            removed = []
            
            for d in neigh_deg:
                if sorted_deg and sorted_deg[-1] == d:
                    sorted_deg.pop()
                    removed.append(d)
                    
            removed.reverse()
            
            if sorted_deg:
                max_neigh = max(max_neigh, sorted_deg[-1])
                
            for v in adj[i]:
                max_neigh = max(max_neigh, deg[v] -1)
                
            for d in removed:
                sorted_deg.append(d)
                
            max_result = max(max_result, node_deg + max_neigh -1)
        print(max_neigh)


if __name__ == "__main__":
    main()

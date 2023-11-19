
# The first line contains the single integer t (1≤t≤104) — the number of test cases.
# The first line of each test case contains two integers xA and yA (1≤xA,yA≤108) — the position of cell A, where both Bob
# and Carol are right now.The second line contains two integers xB and yB(1≤xB,yB≤108) — the position of cell B
# (Bob's house).The third line contains two integers xC and yC (1≤xC,yC≤108) — the position of cell C (Carol's house).
# Additional constraint on the input: the cells A, B, and C are pairwise distinct in each test case.
# For each test case, print the single integer — the maximum number of cells Bob and Carol can walk together
# if each of them goes home along one of the shortest paths.

def solve():
  t = int(input())
  for _ in range(t):
    xA, yA, xB, yB, xC, yC = map(int, input().split())
    distAB = abs(xA - xB) + abs(yA - yB)
    distAC = abs(xA - xC) + abs(yA - yC)
    distBC = abs(xB - xC) + abs(yB - yC)
    minDist = min(distAB, min(distAC, distBC))
    if minDist == distAB:
      print("1", distAC + distBC - distAB)
    elif minDist == distAC:
      print("2", distAB + distBC - distAC)
    else:
      print("3", distAB + distAC - distBC)

if __name__ == "__main__":
  solve()

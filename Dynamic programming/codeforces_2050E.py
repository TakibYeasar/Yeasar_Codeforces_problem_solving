
# Problem link ===>> https://codeforces.com/problemset/problem/2050/E

import sys
from math import inf

def main():
    input = sys.stdin.read
    data = input().splitlines()
    t = int(data[0])
    results = []

    for case in range(1, t + 1):
        a, b, c = data[case].split()
        length_a, length_b = len(a), len(b)

        # Initialize the DP table
        f = [[inf] * (length_b + 1) for _ in range(length_a + 1)]
        f[0][0] = 0

        for i in range(length_a + 1):
            for j in range(length_b + 1):
                k = i + j
                if i < length_a:
                    f[i + 1][j] = min(f[i + 1][j], f[i][j] + (a[i] != c[k]))
                if j < length_b:
                    f[i][j + 1] = min(f[i][j + 1], f[i][j] + (b[j] != c[k]))

        results.append(f[length_a][length_b])

    # Print all results
    sys.stdout.write('\n'.join(map(str, results)) + '\n')
        


if __name__ == "__main__":
    main()

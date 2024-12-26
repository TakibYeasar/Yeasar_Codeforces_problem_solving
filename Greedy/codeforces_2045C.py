
# Problem link ===>> https://codeforces.com/problemset/problem/2045/C


def main():
    S, T = list(map(str, input()))
    n, m = len(S), len(T)

    # Dictionary to store the maximum right-most occurrence of characters in T
    char_map = {}
    for i in range(m - 2, -1, -1):
        char_map[T[i]] = max(char_map.get(T[i], 0), i)

    min_length = float('inf')
    result = "-1"

    # Check for the minimum length concatenated substring
    for i in range(1, n):
        if S[i] not in char_map:
            continue

        current_length = i + m - char_map[S[i]]
        if current_length < min_length:
            min_length = current_length
            prefix = S[:i]
            suffix = T[char_map[S[i]]:]
            result = prefix + suffix

    return result
        


if __name__ == "__main__":
    main()

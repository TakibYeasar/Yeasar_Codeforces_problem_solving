
# Problem link ===>> https://codeforces.com/problemset/problem/1924/A

def find_subsequences(s, k, n):

    count_dict = {}  # Keep track of character frequency in s
    for char in s:
        count_dict[char] = count_dict.get(char, 0) + 1

    # Check if count for any character is less than n
    for char, count in count_dict.items():
        if count < n:
            return False, char * n

    # Build combinations with the most frequent characters first
    subs = []
    for _ in range(n):
        max_char = ""
        max_count = 0
        for char, count in count_dict.items():
            if count > max_count:
                max_char = char
                max_count = count
        subs.append(max_char)
        count_dict[max_char] -= 1

    return True, "".join(subs)


def main():
    t = int(input())
    for _ in range(t):
        n, k, m = map(int, input().split())
        s = input()

        result, invalid_subsequence = find_subsequences(s, k, n)

        if result:
            print("YES")
        else:
            print("NO")
            print(invalid_subsequence)


if __name__ == "__main__":
    main()

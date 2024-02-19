# You are given two integers n and k along with a string s.

# Your task is to check whether all possible strings of length n that can be formed using the first k
# lowercase English alphabets occur as a subsequence of s. If the answer is NO, you also need to print a string of length n
# that can be formed using the first k lowercase English alphabets which does not occur as a subsequence of s.

# If there are multiple answers, you may print any of them.

# Note: A string a is called a subsequence of another string b if a
# can be obtained by deleting some (possibly zero) characters from b without changing the order of the remaining characters.

# Input
# The first line of input contains a single integer t(1≤t≤105), the number of test cases.

# The first line of each test case contains 3 integers n(1≤n≤26),k(1≤k≤26),m(1≤m≤1000), 
# where n and k are the same as described in the input and m is the length of the string s.

# The second line of each test case contains a single string s of length m, comprising only of the first k lowercase English alphabets.

# It is guaranteed that the sum of m and the sum of n over all test cases does not exceed 106.

# Output
# For each test case, print YES if all possible strings of length n that can be formed using the first k lowercase English alphabets occur as a subsequence of s, else print NO.

# If your answer is NO, print a string of length n that can be formed using the first k
# lowercase English alphabets which does not occur as a subsequence of s in the next line.

# You may print each letter of YES or NO in any case (for example, YES, yES, YeS will all be recognized as a positive answer).

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

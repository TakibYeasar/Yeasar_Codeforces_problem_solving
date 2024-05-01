
# Problem link ===>> https://codeforces.com/problemset/problem/1948/D

def longest_repeated_substring(text):
  n = len(text)
  lcs = [[0] * (n + 1) for _ in range(n + 1)]  # Initialize 2D list with zeros

  longest = 0

  for i in range(1, n // 2 + 1):
    for j in range(1, n + 1):
      if j + i > n:
        continue
      if text[j - 1] == text[j + i - 1] or '?' in (text[j - 1], text[j + i - 1]):
        lcs[j][i + j] = lcs[j - 1][i + j - 1] + 1
        longest = max(longest, lcs[j][i + j])
      else:
        lcs[j][i + j] = 0

  return longest * 2  # Since we consider both halves of the substring


def main():
  t = int(input())
  for _ in range(t):
    text = input()
    length = longest_repeated_substring(text)
    print(length)


if __name__ == "__main__":
  main()

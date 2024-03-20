
# Problem link ===>> https://codeforces.com/problemset/problem/59/A

word = input()

uppercase = sum(1 for ch in word if ch.isupper())
lowercase = len(word) - uppercase

if uppercase > lowercase:
    print(word.upper())
else:
    print(word.lower())

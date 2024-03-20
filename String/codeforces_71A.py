
# Problem link ===>> https://codeforces.com/problemset/problem/71/A

n = int(input())

for _ in range(n):
    word = input()
    length = len(word)

    # Check if the word length is greater than 10
    if length > 10:
        abbreviated = word[0] + str(length - 2) + word[-1]
    else:
        abbreviated = word

    print(abbreviated)


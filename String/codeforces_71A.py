
# The first line contains an integer n(1 ≤ n ≤ 100).Each of the following n lines contains one word.
# All the words consist of lowercase Latin letters and possess the lengths of from 1 to 100 characters.
# Print n lines.The i- th line should contain the result of replacing of the i - th word from the input data.

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


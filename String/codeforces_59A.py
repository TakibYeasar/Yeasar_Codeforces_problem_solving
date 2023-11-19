
# The first line contains a word s — it consists of uppercase and lowercase Latin letters and possesses the length from 1 to 100.
# Print the corrected word s.If the given word s has strictly more uppercase letters, make the word written in the
# uppercase register, otherwise - in the lowercase one.

word = input()

uppercase = sum(1 for ch in word if ch.isupper())
lowercase = len(word) - uppercase

if uppercase > lowercase:
    print(word.upper())
else:
    print(word.lower())


# A single line contains a non - empty word.This word consists of lowercase and uppercase English letters.The length of
# the word will not exceed 103.
# Output the given word after capitalization.

word = input()

# Capitalize the first letter of the word
modified_word = word[0].upper() + word[1:]

# Output the modified word
print(modified_word)



# The first line contains word s, the second line contains word t.The words consist of lowercase Latin letters.The input data
# do not consist unnecessary spaces.The words are not empty and their lengths do not exceed 100 symbols.
# If the word t is a word s, written reversely, print YES, otherwise print NO.

def is_translation_correct(s, t):
  """Returns True if the translation is correct, False otherwise."""
  reversed_s = s[::-1]
  return reversed_s == t

s = input()
t = input()

if is_translation_correct(s, t):
  print("YES")
else:
  print("NO")

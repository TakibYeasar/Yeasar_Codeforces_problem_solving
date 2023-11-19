
# The first line contains a single integer n(1≤n≤100) — the number of people who were asked to give their opinions.
# The second line contains n integers, each integer is either 0 or 1
# .If i- th integer is 0, then i- th person thinks that the problem is easy;
# if it is 1, then i - th person thinks that the problem is hard.
# Print one word : "EASY" if the problem is easy according to all responses,
# or "HARD" if there is at least one person who thinks the problem is hard.
# You may print every letter in any register : "EASY","easy", "EaSY" and "eAsY" all will be processed correctly.

def is_easy(responses):
  """Returns True if the problem is easy according to all responses, False otherwise."""
  return all(response == 0 for response in responses)

def main():
  n = int(input())
  responses = [int(response) for response in input().split()]

  if is_easy(responses):
    print("EASY")
  else:
    print("HARD")

if __name__ == '__main__':
  main()

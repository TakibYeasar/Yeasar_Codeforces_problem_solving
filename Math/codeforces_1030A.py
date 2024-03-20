
# Problem link ===>> https://codeforces.com/problemset/problem/1030/A

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


# Problem link ===>> https://codeforces.com/problemset/problem/271/A

def is_beautiful(year):
  """Returns True if the given year is beautiful, False otherwise."""
  digits = set()
  for digit in str(year):
    digits.add(digit)
  return len(digits) == 4

def find_next_beautiful_year(year):
  """Returns the next beautiful year after the given year."""
  while not is_beautiful(year):
    year += 1
  return year

def main():
  year = int(input())
  next_beautiful_year = find_next_beautiful_year(year)
  print(next_beautiful_year)

if __name__ == '__main__':
  main()

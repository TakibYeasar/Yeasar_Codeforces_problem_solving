


def drinks(drinks):
  """Returns the total number of drinks that can be given to everyone in the group.

  Args:
    drinks: A list of integers representing the volume of each drink.

  Returns:
    An integer representing the total number of drinks that can be given to everyone in the group.
  """

  # Sort the drinks in decreasing order.
  drinks.sort(reverse=True)

  total_drinks = 0
  for i in range(len(drinks)):
    # If the current drink is greater than the number of people in the group, we can give everyone the drink.
    if drinks[i] > i:
      total_drinks += i + 1
    else:
      # Otherwise, we can only give the drink to the first drinks[i] people.
      total_drinks += drinks[i]

  return total_drinks


def main():
  """Solves Codeforces problem 200B: Drinks."""

  n = int(input())
  drinks = [int(input()) for i in range(n)]

  total_drinks = drinks(drinks)

  print(total_drinks)


if __name__ == "__main__":
  main()

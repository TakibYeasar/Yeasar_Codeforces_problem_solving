
# Problem link ===>> https://codeforces.com/problemset/problem/467/A

def count_rooms_with_space(rooms):
  """Counts the number of rooms that have at least two spaces available.

  Args:
    rooms: A list of pairs of integers, where each pair represents the current
      number of occupants and capacity of a room.

  Returns:
    The number of rooms with at least two spaces available.
  """

  rooms_with_space = 0
  for current_occupants, capacity in rooms:
    if capacity - current_occupants >= 2:
      rooms_with_space += 1

  return rooms_with_space


def main():
  n = int(input())
  rooms = []
  for i in range(n):
    current_occupants, capacity = map(int, input().split())
    rooms.append((current_occupants, capacity))

  rooms_with_space = count_rooms_with_space(rooms)
  print(rooms_with_space)


if __name__ == '__main__':
  main()

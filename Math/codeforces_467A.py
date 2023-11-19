
# The first line contains a single integer n(1 ≤ n ≤ 100) — the number of rooms.
# The i- th of the next n lines contains two integers pi and qi(0 ≤ pi ≤ qi ≤ 100) — the number of people
# who already live in the i - th room and the room's capacity.
# Print a single integer — the number of rooms where George and Alex can move in.

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

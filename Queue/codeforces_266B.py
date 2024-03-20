
# Problem link ===>> https://codeforces.com/problemset/problem/266/B

def queue_at_school(n, t, s):
  """Simulates the queue of students and returns the number of students who can be served in the allotted time.

  Args:
    n: The number of students in the queue.
    t: The allotted time.
    s: A string representing the initial arrangement of the students, where 'B' represents a boy and 'G' represents a girl.

  Returns:
    The number of students who can be served in the allotted time.
  """

  queue = []
  for i in range(n):
    if s[i] == 'B':
      queue.append(i)

  time = 0
  while queue and time <= t:
    current = queue.pop(0)
    time += 1

  return time


if __name__ == '__main__':
  n, t = map(int, input().split())
  s = input()

  result = queue_at_school(n, t, s)
  print(result)

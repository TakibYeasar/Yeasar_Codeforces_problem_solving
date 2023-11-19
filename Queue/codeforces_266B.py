
# The first line contains two integers n and t(1 ≤ n, t ≤ 50), which represent the number of children in the queue
# and the time after which the queue will transform into the arrangement you need to find.
# The next line contains string s,which represents the schoolchildren's initial arrangement. If the i-th position
# in the queue contains a boy, then the i-th character of string s equals "B", otherwise the i-th character equals "G".
# Print string a,which describes the arrangement after t seconds.If the i - th position has a boy after
# the needed time, then the i - th character a must equal "B", otherwise it must equal "G".

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

# ========= 1

# pi = 3.141592653
# radius = float(input())

# area = pi * radius**2

# print(f"Area = {area:.9f}")


# ==========2
# from math import pi

# radius = float(input())

# area = pi * radius**2

# print(f"Area = {area:.9f}")

# =========3
def calculate_area(radius):
  """
  Calculates the area of a circle given the radius.

  Args:
      radius: The radius of the circle.

  Returns:
      The area of the circle.
  """
  pi = 3.141592653
  return pi * radius**2


# Get input and calculate area
radius = float(input())
area = calculate_area(radius)

print(f"Area = {area:.9f}")


# Problem link ===>> https://codeforces.com/problemset/problem/1916/C

def main():
   """Reads input, processes numbers according to specified logic, and prints output."""

   t = int(input())  # Read the number of test cases
   for _ in range(t):  # Loop through each test case
       n = int(input())  # Read the number of elements
       ans = 0
       even = 0
       odd = 0

       for _ in range(n):  # Read and process each element
           x = int(input())
           ans += x
           if x % 2 == 0:  # If even, increment even count
               even += 1
           else:  # If odd, increment odd count
               odd += 1

           v = odd // 3  # Calculate v based on odd count
           if even == 0 and odd == 1:
               v = 0
           elif odd % 3 == 1:
               v = (odd + 2) // 3

           print(ans - v, end=" ")  # Print the result
       print()  # Print a newline after each test case


if __name__ == "__main__":
   main()  # Call the main function

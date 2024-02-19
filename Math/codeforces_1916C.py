# Masha and Olya have an important team olympiad coming up soon. In honor of this, Masha, for warm-up, suggested playing a game with Olya:
# There is an array a of size n. Masha goes first, and the players take turns. Each move is described by the following sequence of actions:

# ∙ If the size of the array is 1, the game ends.
# ∙ The player who is currently playing chooses two different indices i, j(1≤i,j≤|a|), and performs the following 
# operation — removes ai and aj from the array and adds to the array a number equal to ⌊ai+aj2⌋⋅2. In other words, first divides 
# the sum of the numbers ai, aj by 2 rounding down, and then multiplies the result by 2.

# Masha aims to maximize the final number, while Olya aims to minimize it.
# Masha and Olya decided to play on each non-empty prefix of the initial array a, and asked for your help.
# For each k=1,2,…,n, answer the following question. Let only the first k elements of the array a be present 
# in the game, with indices 1,2,…,k respectively. What number will remain at the end with optimal play by both players?
# Input
# The first line contains an integer t (1≤t≤104) — the number of test cases.
# The first line of each test case contains a single integer n (1≤n≤105) — the size of the array.
# The second line contains n integers a1,a2,…,an (1≤ai≤109) — the array on which Masha and Olya play.
# It is guaranteed that the sum of n over all test cases does not exceed 105.
# Output
# For each test case, output n integers. The k-th of these numbers should be equal to the number that will 
# remain at the end with optimal play by both players, on the array consisting of the first k elements of the array a.

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

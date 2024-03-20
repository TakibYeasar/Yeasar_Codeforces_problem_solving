
# Problem link ===>> https://codeforces.com/problemset/problem/1933/C

from math import sqrt

def divisors(n):
    divisors = []
    for i in range(1, int(sqrt(n)) + 1):
        if n % i == 0:
            if n // i == i:
                divisors.append(i)
            else:
                divisors.append(i)
                divisors.append(n // i)
    return divisors

def main():
  t = int(input())
  for _ in range(t):
    a, b, l = map(int, input().split())
    divisors_l = divisors(l)

    # Generate powers of a and b up to 1 million
    powers_a = [a**i for i in range(21) if a**i <= 1e6]
    powers_b = [b**i for i in range(21) if b**i <= 1e6]

    count = 0
    for divisor in divisors_l:
      for power_a in powers_a:
        for power_b in powers_b:
          if divisor * power_a * power_b == l:
            count += 1
            break

    print(count)

if __name__ == "__main__":
  main()
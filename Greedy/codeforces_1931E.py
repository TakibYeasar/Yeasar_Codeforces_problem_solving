# Problem link ===>> https://codeforces.com/problemset/problem/1931/A

def count_digits(num):
  count = 0
  while num > 0:
    num //= 10 
    count += 1
  return count


def count_zeroes(num):
  count = 0
  while num > 0 and num % 10 == 0:
    num //= 10 
    count += 1
  return count


def main():
  t = int(input())

  for _ in range(t):
    n, m = map(int, input().split())

    nums = list(map(int, input().split()))

    digit_sum = 0
    zeroes = [0] * n 

    for i in range(n):
      digit_sum += count_digits(nums[i])
      zeroes[i] = count_zeroes(nums[i])

    zeroes.sort(reverse=True)

    removed_zeroes = 0

    for i in range(0, n, 2):
      removed_zeroes += min(zeroes[i], m)
      m -= removed_zeroes 

    digit_sum -= removed_zeroes

    if digit_sum >= (m + 1):
      print("Sasha")
    else:
      print("Anna")


if __name__ == "__main__":
  main()

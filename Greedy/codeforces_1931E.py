# Sasha gave Anna a list a of n integers for Valentine's Day. Anna doesn't need this list, so she suggests destroying it by playing a game.

# Players take turns. Sasha is a gentleman, so he gives Anna the right to make the first move.

# On her turn, Anna must choose an element ai from the list and reverse the sequence of its digits. For example, 
# if Anna chose the element with a value of 42 , it would become 24 ; if Anna chose the element with a value of 1580 , 
# it would become 851 . Note that leading zeros are removed. After such a turn, the number of elements in the list does not change.
# On his turn, Sasha must extract two elements ai and aj (i≠j) from the list, concatenate them in any order and 
# insert the result back into the list. For example, if Sasha chose the elements equal to 2007 and 19, he would remove these 
# two elements from the list and add the integer 200719 or 192007. After such a turn, the number of elements in the list decreases by 1.
# Players can't skip turns. The game ends when Sasha can't make a move, i.e. after Anna's move there is exactly one number 
# left in the list. If this integer is not less than 10m (i.e., ≥10m), Sasha wins. Otherwise, Anna wins.

# It can be shown that the game will always end. Determine who will win if both players play optimally.

# Input
# The first line contains an integer t (1≤t≤104) — the number of test cases.
# Then follows the description of the test cases.
# The first line of each test case contains integers n, m(1≤n≤2⋅105, 0≤m≤2⋅106) — the number of integers in the list and 
# the parameter determining when Sasha wins.
# The second line of each test case contains n integers a1,a2,…,an (1≤ai≤109) — the list that Sasha gave to Anna.
# It is guaranteed that the sum of n for all test cases does not exceed 2⋅105.

# Output
# For each test case, output:
# "Sasha", if Sasha wins with optimal play;
# "Anna", if Anna wins with optimal play.

def count_digits(num):
    """Counts the number of digits in a non-negative integer."""
    count = 0
    while num > 0:
        num //= 10
        count += 1
    return count


def count_zeroes(num):
    """Counts the number of leading zeros in a non-negative integer."""
    count = 0
    while num > 0 and num % 10 == 0:
        num //= 10
        count += 1
    return count


def main():
    t = int(input())

    for _ in range(t):
        n, m = map(int, input().split())
        nums = [int(num) for num in input().split()]

        digit_sum = 0
        zeroes = [count_zeroes(num) for num in nums]

        zeroes.sort(reverse=True)

        removed_zeroes = 0
        for i in range(n):
            removed_zeroes += min(zeroes[i], (m + 1) // 2)

        digit_sum -= removed_zeroes

        if digit_sum >= (m + 1):
            print("Sasha")
        else:
            print("Anna")


if __name__ == "__main__":
    main()

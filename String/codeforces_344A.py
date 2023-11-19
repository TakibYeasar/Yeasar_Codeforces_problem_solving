
# The first line of the input contains an integer n(1 ≤ n ≤ 100000) — the number of magnets.Then n lines follow.
# The i - th line(1 ≤ i ≤ n) contains either characters "01", if Mike put the i - th magnet in the "plus-minus" position,
# or characters "10", if Mike put the magnet in the "minus-plus" position.
# On the single line of the output print the number of groups of magnets.

def count_groups(magnets):
    """Counts the number of groups of magnets in a given list.

    Args:
        magnets: A list of strings, where each string represents a magnet.

    Returns:
        The number of groups of magnets.
    """

    groups = 1
    previous = magnets[0]

    for magnet in magnets[1:]:
        if magnet != previous:
            groups += 1
        previous = magnet

    return groups


def main():
    """Solves the Codeforces 344A problem "Magnets"."""

    n = int(input())
    magnets = []

    for i in range(n):
        magnets.append(input())

    groups = count_groups(magnets)

    print(groups)


if __name__ == "__main__":
    main()

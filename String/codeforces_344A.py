
# Problem link ===>> https://codeforces.com/problemset/problem/344/A

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

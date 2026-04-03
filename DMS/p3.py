from itertools import permutations, product

def generate_permutations(digits, length, with_repetition=False):
    if with_repetition:
        # Cartesian product allows repetition
        return list(product(digits, repeat=length))
    else:
        # Permutations without repetition
        return list(permutations(digits, length))


def main():
    digits = input("Enter digits (space separated): ").split()
    length = int(input("Enter length of permutation: "))
    choice = input("Allow repetition? (y/n): ").lower()

    if choice == 'y':
        perms = generate_permutations(digits, length, with_repetition=True)
    else:
        perms = generate_permutations(digits, length, with_repetition=False)

    print("\nGenerated permutations:")
    for p in perms:
        print("".join(p))


if __name__ == "__main__":
    main()
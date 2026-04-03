def evaluate_polynomial(coeffs, n):

    result = 0
    for power, coeff in enumerate(coeffs):
        result += coeff * (n ** power)
    return result


def main():
    # Example polynomial: f(n) = 4n^2 + 2n + 9
    # Stored as [9, 2, 4] → 9 + 2n + 4n^2
    coeffs = list(map(int, input("Enter coefficients (space separated, constant first): ").split()))
    n = int(input("Enter value of n: "))

    value = evaluate_polynomial(coeffs, n)
    print(f"\nPolynomial value at n={n}: {value}")


if __name__ == "__main__":
    main()
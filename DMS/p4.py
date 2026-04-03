def find_solutions(n, C):
    solutions = []

    def backtrack(current, remaining, index):
        # If we are at the last variable, assign the remaining value
        if index == n - 1:
            current.append(remaining)
            solutions.append(current[:])
            current.pop()
            return
        # Try all possible values for x[index]
        for val in range(remaining + 1):
            current.append(val)
            backtrack(current, remaining - val, index + 1)
            current.pop()

    backtrack([], C, 0)
    return solutions


def main():
    n = int(input("Enter number of variables (n): "))
    C = int(input("Enter constant C (<=10): "))

    if C > 10:
        print("C must be <= 10")
        return

    solutions = find_solutions(n, C)
    print(f"\nSolutions for x1 + x2 + ... + x{n} = {C}:")
    for sol in solutions:
        print(sol)


if __name__ == "__main__":
    main()
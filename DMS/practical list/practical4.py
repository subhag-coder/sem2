def find_solutions(n, C):
    solutions = []

    def backtrack(current, remaining, index):
        
        if index == n - 1:
            current.append(remaining)
            solutions.append(current[:])
            current.pop()
            return
        
        for val in range(remaining + 1):
            current.append(val)
            backtrack(current, remaining - val, index + 1)
            current.pop()

    backtrack([], C, 0)
    return solutions



n = int(input("Enter number of variables (n): "))
C = int(input("Enter constant C (<=10): "))

if C > 10:
    print("C must be <= 10")
else:
    solutions = find_solutions(n, C)
    print(f"\nSolutions for x1 + x2 + ... + x{n} = {C}:")
    for sol in solutions:
        
        print(", ".join([f"x{i+1}={val}" for i, val in enumerate(sol)]))
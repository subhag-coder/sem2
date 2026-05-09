def permutations_without_repetition(digits, current=""):
    if not digits:
        print(current)
        return
    for i in range(len(digits)):
        permutations_without_repetition(digits[:i] + digits[i+1:], current + digits[i])

def permutations_with_repetition(digits, length, current=""):
    if len(current) == length:
        print(current)
        return
    for d in digits:
        permutations_with_repetition(digits, length, current + d)



digits = input("Enter digits (no spaces, e.g. 123): ")
length = int(input("Enter length of permutation: "))
choice = input("Allow repetition? (y/n): ").lower()

print("\nGenerated permutations:")
if choice == 'y':
    permutations_with_repetition(digits, length)
else:
    if length > len(digits):
        print("Length cannot exceed number of digits without repetition.")
    else:
        permutations_without_repetition(digits[:length])
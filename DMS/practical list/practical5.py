coeffs = [9, 2, 4]
n = int(input("Enter value of n: "))

result = 0
for i in range(len(coeffs)):
    power_val = 1
    for _ in range(i):
        power_val *= n
    result += coeffs[i] * power_val

print("Polynomial coefficients:", coeffs)
print(f"Value of f({n}) =", result)

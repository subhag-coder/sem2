def is_complete_graph(matrix, n):
    for i in range(n):
        for j in range(n):
            if i == j:
                if matrix[i][j] != 0:
                    return False
            else:
                if matrix[i][j] != 1:
                    return False
    return True


n = int(input("Enter number of vertices: "))
matrix = []

print("Enter adjacency matrix row by row (use 0/1):")
for i in range(n):
    row_input = input(f"Row {i+1}: ").split()
    row = []
    for val in row_input:
        row.append(int(val))
    if len(row) != n:
        print("Error: Each row must have", n, "entries.")
        exit()
    matrix.append(row)

print("\nAdjacency Matrix:")
for i in range(n):
    print(matrix[i])

if is_complete_graph(matrix, n):
    print("\nThe graph is a COMPLETE graph.")
else:
    print("\nThe graph is NOT a complete graph.")

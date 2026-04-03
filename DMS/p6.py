def is_complete_graph(matrix):
    n = len(matrix)
    for i in range(n):
        for j in range(n):
            if i == j and matrix[i][j] != 0:
                # No self-loops allowed in a complete graph
                return False
            if i != j and matrix[i][j] != 1:
                # Every pair of distinct vertices must be connected
                return False
    return True


def main():
    n = int(input("Enter number of vertices: "))
    print("Enter adjacency matrix row by row (use 0/1):")
    matrix = []
    for i in range(n):
        row = list(map(int, input(f"Row {i+1}: ").split()))
        if len(row) != n:
            print("Error: Each row must have", n, "entries.")
            return
        matrix.append(row)

    if is_complete_graph(matrix):
        print("\nThe graph is a COMPLETE graph.")
    else:
        print("\nThe graph is NOT a complete graph.")


if __name__ == "__main__":
    main()
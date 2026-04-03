def compute_degrees(matrix):
    n = len(matrix)
    in_degree = [0] * n
    out_degree = [0] * n

    for i in range(n):
        for j in range(n):
            if matrix[i][j] == 1:
                out_degree[i] += 1   # edge from i → j
                in_degree[j] += 1    # edge into j

    return in_degree, out_degree


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

    in_deg, out_deg = compute_degrees(matrix)

    print("\nVertex\tIn-degree\tOut-degree")
    for i in range(n):
        print(f"{i+1}\t{in_deg[i]}\t\t{out_deg[i]}")


if __name__ == "__main__":
    main()def compute_degrees(matrix):
    n = len(matrix)
    in_degree = [0] * n
    out_degree = [0] * n

    for i in range(n):
        for j in range(n):
            if matrix[i][j] == 1:
                out_degree[i] += 1   # edge from i → j
                in_degree[j] += 1    # edge into j

    return in_degree, out_degree


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

    in_deg, out_deg = compute_degrees(matrix)

    print("\nVertex\tIn-degree\tOut-degree")
    for i in range(n):
        print(f"{i+1}\t{in_deg[i]}\t\t{out_deg[i]}")


if __name__ == "__main__":
    main()
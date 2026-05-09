def is_complete_graph(adj_list, n):
    for i in range(n):
        count = 0
        for j in adj_list[i]:

            if j == i:
                return False
            count += 1
        if count != n - 1:
            return False
    return True


n = int(input("Enter number of vertices: "))
adj_list = []

print("Enter adjacency list for each vertex (space separated indices, 0-based):")
for i in range(n):
    row = input(f"Vertex {i}: ").split()
    temp = []
    for val in row:
        temp.append(int(val))
    adj_list.append(temp)

print("\nAdjacency List Representation:")
for i in range(n):
    print(i, "->", adj_list[i])

if is_complete_graph(adj_list, n):
    print("\nThe graph is a COMPLETE graph.")
else:
    print("\nThe graph is NOT a complete graph.")

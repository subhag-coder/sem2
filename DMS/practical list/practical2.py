class RELATION:
    def __init__(self, matrix):
        self.matrix = matrix
        self.n = len(matrix)

    def is_reflexive(self):
        for i in range(self.n):
            if self.matrix[i][i] != 1:
                return False
        return True

    def is_symmetric(self):
        for i in range(self.n):
            for j in range(self.n):
                if self.matrix[i][j] != self.matrix[j][i]:
                    return False
        return True

    def is_antisymmetric(self):
        for i in range(self.n):
            for j in range(self.n):
                if i != j and self.matrix[i][j] == 1 and self.matrix[j][i] == 1:
                    return False
        return True

    def is_transitive(self):
        for i in range(self.n):
            for j in range(self.n):
                if self.matrix[i][j] == 1:
                    for k in range(self.n):
                        if self.matrix[j][k] == 1 and self.matrix[i][k] != 1:
                            return False
        return True

    def classify_relation(self):
        reflexive = self.is_reflexive()
        symmetric = self.is_symmetric()
        antisymmetric = self.is_antisymmetric()
        transitive = self.is_transitive()

        if reflexive and symmetric and transitive:
            return "Equivalence Relation"
        elif reflexive and antisymmetric and transitive:
            return "Partial Order Relation"
        else:
            return "None"


matrix = [
    [1, 1, 0],
    [1, 1, 0],
    [0, 0, 1]
]

relation = RELATION(matrix)

print("Adjacency Matrix:")
for row in matrix:
    print(row)

print("\nProperties of the relation:")
print("Reflexive:", relation.is_reflexive())
print("Symmetric:", relation.is_symmetric())
print("Anti-symmetric:", relation.is_antisymmetric())
print("Transitive:", relation.is_transitive())

print("\nClassification:", relation.classify_relation())

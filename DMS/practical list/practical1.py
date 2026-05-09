class SET:
    def __init__(self, elements=None):
        if elements is None:
            elements = []
            
        self.elements = []
        for e in elements:
            if e not in self.elements:
                self.elements.append(e)


    def is_member(self, element):
        for e in self.elements:
            if e == element:
                return True
        return False

    def powerset(self):
        result = [[]]
        for elem in self.elements:
            new_subsets = []
            for subset in result:
                new_subsets.append(subset + [elem])
            result += new_subsets
        return result

    def is_subset(self, other_set):
        for e in self.elements:
            if e not in other_set.elements:
                return False
        return True

    def union(self, other_set):
        new_elements = self.elements[:]
        for e in other_set.elements:
            if e not in new_elements:
                new_elements.append(e)
        return SET(new_elements)

    def intersection(self, other_set):
        new_elements = []
        for e in self.elements:
            if e in other_set.elements:
                new_elements.append(e)
        return SET(new_elements)

    def complement(self, universal_set):
        new_elements = []
        for e in universal_set.elements:
            if e not in self.elements:
                new_elements.append(e)
        return SET(new_elements)

    def difference(self, other_set):
        new_elements = []
        for e in self.elements:
            if e not in other_set.elements:
                new_elements.append(e)
        return SET(new_elements)

    def symmetric_difference(self, other_set):
        new_elements = []
        for e in self.elements:
            if e not in other_set.elements:
                new_elements.append(e)
        for e in other_set.elements:
            if e not in self.elements:
                new_elements.append(e)
        return SET(new_elements)

    def cartesian_product(self, other_set):
        product = []
        for a in self.elements:
            for b in other_set.elements:
                product.append((a, b))
        return product

    def __str__(self):
        return "{" + ", ".join(map(str, self.elements)) + "}"

universal = SET(input("Enter elements of universal set (space separated): ").split())
s1 = SET(input("Enter elements of Set 1 (space separated): ").split())
s2 = SET(input("Enter elements of Set 2 (space separated): ").split())

while True:
    print("\n--- SET Operations Menu ---")
    print("1. Check membership")
    print("2. Power set")
    print("3. Subset check")
    print("4. Union")
    print("5. Intersection")
    print("6. Complement")
    print("7. Difference")
    print("8. Symmetric Difference")
    print("9. Cartesian Product")
    print("0. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        elem = input("Enter element to check in Set1: ")
        print("Member:", s1.is_member(elem))
    elif choice == "2":
        print("Power set of Set1:")
        for subset in s1.powerset():
            print(subset)
    elif choice == "3":
        print("Set1 ⊆ Set2:", s1.is_subset(s2))
    elif choice == "4":
        print("Union:", s1.union(s2))
    elif choice == "5":
        print("Intersection:", s1.intersection(s2))
    elif choice == "6":
        print("Complement of Set1:", s1.complement(universal))
    elif choice == "7":
        print("Set1 - Set2:", s1.difference(s2))
    elif choice == "8":
        print("Symmetric Difference:", s1.symmetric_difference(s2))
    elif choice == "9":
        print("Cartesian Product:", s1.cartesian_product(s2))
    elif choice == "0":
        print("Exiting program.")
        break
    else:
        print("Invalid choice. Try again.")

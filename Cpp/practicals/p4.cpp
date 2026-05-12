#include <iostream>
using namespace std;

int length(char *s) {
    int len = 0;
    while (*(s + len) != '\0') {
        len++;
    }
    return len;
}

void showAddress(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        cout << "Character: " << s[i] << " Address: " << (void*)&s[i] << endl;
    }
}

void concatenate(char *s1, char *s2, char *result) {
    int i = 0, j = 0;
    while (s1[i] != '\0') {
        result[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0') {
        result[i] = s2[j];
        i++; j++;
    }
    result[i] = '\0';
}

int compare(char *s1, char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (s1[i] - s2[i]);
}

void toUppercase(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
    }
}

void reverse(char *s) {
    int len = length(s);
    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}

void insertString(char *s1, char *s2, int pos, char *result) {
    int i = 0, j = 0, k = 0;
    int len1 = length(s1);
    int len2 = length(s2);

    for (i = 0; i < pos && i < len1; i++) {
        result[k++] = s1[i];
    }

    for (j = 0; j < len2; j++) {
        result[k++] = s2[j];
    }


    for (; i < len1; i++) {
        result[k++] = s1[i];
    }

    result[k] = '\0';
}

int main() {
    char str1[100], str2[100], result[200];
    int choice;

    cout << "Enter a string: ";
    cin.getline(str1, 100);

    do {
        cout << "\nMenu:\n";
        cout << "1. Show address of each character\n";
        cout << "2. Concatenate two strings\n";
        cout << "3. Compare two strings\n";
        cout << "4. Calculate length of the string\n";
        cout << "5. Convert lowercase to uppercase\n";
        cout << "6. Reverse the string\n";
        cout << "7. Insert a string at position\n";
        cout << "8. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                showAddress(str1);
                break;
            case 2:
                cout << "Enter another string: ";
                cin.getline(str2, 100);
                concatenate(str1, str2, result);
                cout << "Concatenated string: " << result << endl;
                break;
            case 3:
                cout << "Enter another string: ";
                cin.getline(str2, 100);
                if (compare(str1, str2) == 0)
                    cout << "Strings are equal\n";
                else
                    cout << "Strings are not equal\n";
                break;
            case 4:
                cout << "Length of string: " << length(str1) << endl;
                break;
            case 5:
                toUppercase(str1);
                cout << "Uppercase string: " << str1 << endl;
                break;
            case 6:
                reverse(str1);
                cout << "Reversed string: " << str1 << endl;
                break;
            case 7:
                cout << "Enter another string: ";
                cin.getline(str2, 100);
                int pos;
                cout << "Enter position to insert: ";
                cin >> pos;
                insertString(str1, str2, pos, result);
                cout << "String after insertion: " << result << endl;
                break;
            case 8:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 8);

    return 0;
}

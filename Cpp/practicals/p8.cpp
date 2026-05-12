#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int mat[10][10];

public:
    Matrix(int r = 0, int c = 0) {
        rows = r;
        cols = c;
    }

    void input() {
        cout << "Enter elements (" << rows << "x" << cols << "):\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> mat[i][j];
            }
        }
    }

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }


    Matrix add(Matrix other, bool &ok) {
        Matrix result;
        if (rows != other.rows || cols != other.cols) {
            ok = false;
            return result;
        }
        ok = true;
        result.rows = rows;
        result.cols = cols;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
            }
        }
        return result;
    }


    Matrix multiply(Matrix other, bool &ok) {
        Matrix result;
        if (cols != other.rows) {
            ok = false;
            return result;
        }
        ok = true;
        result.rows = rows;
        result.cols = other.cols;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                result.mat[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }
        return result;
    }

    Matrix transpose() {
        Matrix result(cols, rows);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.mat[j][i] = mat[i][j];
            }
        }
        return result;
    }

    int getRows() { return rows; }
    int getCols() { return cols; }
};

int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and cols of Matrix A: ";
    cin >> r1 >> c1;
    Matrix A(r1, c1);
    A.input();

    cout << "Enter rows and cols of Matrix B: ";
    cin >> r2 >> c2;
    Matrix B(r2, c2);
    B.input();

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Sum\n";
        cout << "2. Product\n";
        cout << "3. Transpose (Matrix A)\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        bool ok;
        switch (choice) {
            case 1: {
                Matrix C = A.add(B, ok);
                if (ok) {
                    cout << "Sum:\n";
                    C.display();
                } else {
                    cout << "Error: Matrices incompatible for addition!\n";
                }
                break;
            }
            case 2: {
                Matrix C = A.multiply(B, ok);
                if (ok) {
                    cout << "Product:\n";
                    C.display();
                } else {
                    cout << "Error: Matrices incompatible for multiplication!\n";
                }
                break;
            }
            case 3: {
                Matrix C = A.transpose();
                cout << "Transpose of Matrix A:\n";
                C.display();
                break;
            }
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}

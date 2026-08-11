#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows (m): ";
    cin >> m;
    cout << "Enter number of columns (n): ";
    cin >> n;

    int **matrix = new int*[m];        // allocate array of row pointers
    for (int i = 0; i < m; i++)
        matrix[i] = new int[n];        // allocate each row

    cout << "Enter " << m * n << " matrix elements:" << endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    cout << "\nMatrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < m; i++)
        delete[] matrix[i];    // free each row first
    delete[] matrix;           // then free the row pointer array
    matrix = nullptr;

    return 0;
}
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int n = 4, m = 4;
    int begin = -5, end = 10;

    int A[n][m];

    srand(time(0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            A[i][j] = rand() % (end - begin + 1) + begin;
        }
    }

    cout << "____matrix A_____" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << "\t";
        }
        cout << "\n";
    }

    for (int col = 0; col < m; col++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (A[j][col] > A[j + 1][col]) {
                    int change = A[j][col];
                    A[j][col] = A[j + 1][col];
                    A[j + 1][col] = change;
                }
            }
        }
    }

    cout << "____Відсортована матриця_____" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
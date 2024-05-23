#include <iostream>
#include <Windows.h>

using namespace std;

#define n 2
#define m 2

int main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int begin = 2;
    int end = 8;

    int A[n][m];
    int B[n][m];
    int C[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            A[i][j] = rand() % (end - begin + 1) + begin;
            B[i][j] = rand() % (end - begin + 1) + begin;
        }
    }

    cout << "----Matrix A-----\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "----Matrix B-----\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << B[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "----Matrix A + B-----\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << A[i][j] + B[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "----Matrix A - B-----\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << A[i][j] - B[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "----Matrix A * B-----\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << C[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
#include<iostream>
using namespace std;
#include<Windows.h>

#define n 2 //������� ����� � �����
#define m 2 //������� ���������

int main() 
{
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int begin = 2;
	int end = 8;

	//2 4
	//2 7 
	//const int n = 10;
	//------------��������� �����--------------------
	/*int list[n];

	for (int i = 0; i < n; i++)
	{
		list[i] = rand() % (end - begin + 1) + begin;
	}

	cout << "��� �����:\n";
	for (int i = 0; i < n; i++)
	{
		cout << list[i] << " ";
	}

	cout << "\n";*/
	
	//------------����������� ����� - ���������--------------
	/*int matrix[n][m] = {{2,5}, {4, 7}};

	//cout << matrix[0][0] << "\n";
	//cout << matrix[0][1] << "\n";
	//cout << matrix[1][0] << "\n";
	//cout << matrix[1][1] << "\n";


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % (end - begin + 1) + begin;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << "\n";
	} */
	

	//�������� ��� ������������ �������� - �������
	//��������� �� ��������
	int A[n][m];
	int B[n][m];
	
	//���������� ����������
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
	cout << "----Matrix A+B-----\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << A[i][j]+B[i][j] << "\t";
		}
		cout << "\n";
	}

	cout << "----Matrix A-B-----\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << A[i][j] - B[i][j] << "\t";
		}
		cout << "\n";
	}
	return 0;
}
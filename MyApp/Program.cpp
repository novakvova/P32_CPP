#include <iostream>
using namespace std;
#include<Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//int action = 10;
	//
	//while (action != 0) {
	//	cout << "0.�����\n";
	//	cout << "1.³�������� SMS\n";
	//	cout << "2.³�������� ����������� �� �����\n";
	//	cout << "->_";
	//	cin >> action;
	//
	//	switch (action) {
	//	case 1: 
	//		cout << "����������� SMS ��������\n";
	//		break;
	//
	//	case 2: 
	//		cout << "���������� email ��������\n";
	//		break;
	//	}
	//}

	//1
	//1 2
	//1 2 3
	//1 2 3 4 
	//1 2 3 4 5

	//++i - �������� ��������, � ���� ��������������� (����������)
	//i++ - �������� ���������������, � ���� ���������� �� 1



	//Ctrl+K+F
	//int out = 1;
	//while (out <= 5)
	//{
	//	int input = 1;
	//	while (input <= out)
	//	{
	//		cout << input++ << " ";
	//	}
	//	cout << endl;
	//	out++;
	//}

	//� ���� while - ������� ������������ ������� ����������� ������� a �� z
	//������� ����� �� ������� ��������� ASCII - �������
	//a 
	//z

	//�������� ����� ������� ��������
	// 1. ��������� ���������� (�����������) �����.
	srand(time(NULL)); // ����������� ���������� ���������� �����
	int begin = 10;
	int end = 15;
	int n = rand() % (end - begin + 1) + begin;
	//�� ������� ������ �� 10 �� 15 - �������
	//� ���� ����� �� ���� ������ � 12 ����� ������.
	//����� ������� ���������� � ������� ��������
	begin = 2;
	end = 9;
	int answer;
	while (n > 0)
	{
		int a = rand() % (end - begin + 1) + begin;
		int b = rand() % (end - begin + 1) + begin;
		cout << a << "x" << b << " = ";
		cin >> answer;
		n--;
	}
	cout << endl;

}



#include<iostream>
#include <Windows.h>
using namespace std;

//�������� �������
void fillArray(int*, const int); //��������� ������� ����������� �����������
char* inputStr(); //��� ����� � ���������. ������� �������� �� ����� �������� ����� 
int sizeStr(const char*);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));

	cout << "������ ��'�?\n";
	char* firstName = inputStr();

	cout << "������ �������?\n";
	char* lastName = inputStr();

	cout << "����� " << lastName << " " << firstName << "!\n";
	cout << "sizeof name " << sizeof firstName << "\n";


	delete[] lastName;
	delete[] firstName;
	
	/*
	char* name = new char[5];
	name[0] = '�';
	name[1] = '�';
	name[2] = '�';
	name[3] = '�';
	name[4] = '\0';

	cout << "���� ��'� "<< name <<"\n";

	char* first = name; //��������, ���� ����� �� ��������
	//first++; // �� �� ������� - ������� �� �������� ������ � ���'��
	char item = *first;  //������������ ���������
	while (item != '\0') {
		cout << item;
		first++;
		item = *first;
	}
	*/
	
	//while()

	
	//char *str = "����";

	//int n;
	//cout << "������ ���� ��'�\n";
	/*cin >> n;
	mas = new int[n];
	fillArray(mas, n);
	for (int i = 0; i < n; i++)
	{
		cout << mas[i]<<"\t";
	}
	cout << "\n"; */
	return 0;
}

char* inputStr() {
	char str[80]; //����������� ����� �������� 80 �������, � ������ 79 + \0
	cin.getline(str, '\n');
	int size = 0;
	for (int i = 0; i < 80; i++)
	{
		if (str[i] == '\0')
		{
			//cout << "ʳ���� ����� " << i << "\n";
			size = i + 1;
			break;
		}
	}
	char* result = new char[size];
	for (int i = 0; i < size; i++)
	{
		result[i] = str[i];
	}
	return result;
}


//��������� �������
void fillArray(int * mas, const int n) { //��������� ������� ����������� ����������
	const int begin = 18, end = 60;
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % (end - begin + 1) + begin;
	}
}
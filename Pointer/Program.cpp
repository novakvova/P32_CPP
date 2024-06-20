#include<iostream>
#include <Windows.h>
using namespace std;

//прототип функції
void fillArray(int*, const int); //параметри функції називаються формальними

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));

	cout << "Як Вас звати?\n";
	char str[80]; //максимально можна записать 80 символів, а точніше 79 + \0
	cin.getline(str, '\n');
	cout <<"Привіт " << str << "!\n";
	cout << "Довжина рядка " << sizeof(str) << "\n";

	for (int i = 0; i < 80; i++)
	{
		if (str[i] == '\0')
		{
			cout << "Кінець рядка " << i<<"\n";
		}
	}

	char* name = new char[5];
	name[0] = 'В';
	name[1] = 'о';
	name[2] = 'в';
	name[3] = 'а';
	name[4] = '\0';

	cout << "Ваше ім'я "<< name <<"\n";

	char* first = name; //вказівник, який вказує на вказівник
	//first++; // Що то язробив - перехід на наступну комірку в пам'яті
	char item = *first;  //розіменування вказівника
	while (item != '\0') {
		cout << item;
		first++;
		item = *first;
	}
	
	//while()

	
	//char *str = "Вова";

	//int n;
	//cout << "Вкажіть ваше ім'я\n";
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

//Реалізація функції
void fillArray(int * mas, const int n) { //параметри функції називаються фактичними
	const int begin = 18, end = 60;
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % (end - begin + 1) + begin;
	}
}
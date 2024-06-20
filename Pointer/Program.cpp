#include<iostream>
#include <Windows.h>
using namespace std;

//прототип функції
void fillArray(int*, const int); //параметри функції називаються формальними
char* inputStr(); //Ввід даних з клавіатури. Повертає вказівник на масив елементів рядка 
int sizeStr(const char*);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));

	cout << "Вкажіть ім'я?\n";
	char* firstName = inputStr();

	cout << "Вкажіть прізвище?\n";
	char* lastName = inputStr();

	cout << "Привіт " << lastName << " " << firstName << "!\n";
	cout << "sizeof name " << sizeof firstName << "\n";


	delete[] lastName;
	delete[] firstName;
	
	/*
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
	*/
	
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

char* inputStr() {
	char str[80]; //максимально можна записать 80 символів, а точніше 79 + \0
	cin.getline(str, '\n');
	int size = 0;
	for (int i = 0; i < 80; i++)
	{
		if (str[i] == '\0')
		{
			//cout << "Кінець рядка " << i << "\n";
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


//Реалізація функції
void fillArray(int * mas, const int n) { //параметри функції називаються фактичними
	const int begin = 18, end = 60;
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % (end - begin + 1) + begin;
	}
}
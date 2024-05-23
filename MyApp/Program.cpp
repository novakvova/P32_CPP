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
	//	cout << "0.Вихід\n";
	//	cout << "1.Відправити SMS\n";
	//	cout << "2.Відправити повідомлення на пошту\n";
	//	cout << "->_";
	//	cin >> action;
	//
	//	switch (action) {
	//	case 1: 
	//		cout << "Повідомлення SMS надіслано\n";
	//		break;
	//
	//	case 2: 
	//		cout << "Повідмлення email надіслано\n";
	//		break;
	//	}
	//}

	//1
	//1 2
	//1 2 3
	//1 2 3 4 
	//1 2 3 4 5

	//++i - спочатку додається, а потім використовується (виводиться)
	//i++ - спосатку використовується, а потім збільшується на 1



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

	//У циклі while - вивести послідовность символів англійського алфавіту a до z
	//Символи брати із таблиці кодування ASCII - таблиці
	//a 
	//z

	//Перевірка знань таблиці множення
	// 1. Герерація рандомного (випадкового) числа.
	srand(time(NULL)); // Ініціалізація генератора випадкових чисел
	int begin = 10;
	int end = 15;
	int n = rand() % (end - begin + 1) + begin;
	//має кількість питань від 10 до 15 - рандомо
	//у кінці тесту має бути оцінки у 12 бальні системі.
	//можна кількість правильних і невірних відповідей
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



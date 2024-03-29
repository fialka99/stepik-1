﻿// sss.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


using namespace std; 

int main() { 
	//1) Вывести, сколько памяти (в байтах) на вашем компьютере отводится под различные типы данных со спецификаторами и без: int, short int, long int, float, double, long double, char и bool.
	cout << "int:" << sizeof(int) << '\n' << "short:" << sizeof(short) << '\n' << "long:" << sizeof(long) << '\n' << "float:" << sizeof(float) << '\n' << "double:" << sizeof(double) << '\n' << "long double:" << sizeof(long double) << '\n' << "char:" << sizeof(char) << '\n' << "bool:" << sizeof(bool) << '\n';
	//2) Вывести на экран двоичное представление в памяти (все разряды) целого числа. При выводе необходимо визуально обозначить знаковый разряд и значащие разряды отступами или цветом.
	setlocale(LC_ALL, "Rus");
	//2 задание
	cout << "2 задание"<<'\n';
	int input;
	cin >> input;
	int a = sizeof(int) * 8; // 32 разряда
	int mask = 1 << a - 1 ; 
	for ( int i = 1; i < a; i++)
	{
		cout << ((input & mask) ? 1 : 0);
		
		if (i == 1 || i % 8 == 0) 
			cout << (' ');
		input <<= 1;
	
	}
	//задание 3
	cout  << "\n" ;	
	union {
		int tool;
		float f;
	};
	cout << "enter float: ";
	cin >> f;
	for (int i = 1; i <= a; i++)
	{
		cout << ((tool & mask) ? 1 : 0);
		if (i == 1 || i % 8 == 0)
			cout << " ";
		tool <<= 1; 
	}
	cout << '\n';
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

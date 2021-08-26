#include<iostream>
using namespace std;

//#define FLOOR
//#define FACTORIAL 
//#define POWER 
#define FIBONACCI

void elevator(int floor)
{
	if (floor == 0) //Условие выхода из рекурсии
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << floor << endl;
	elevator(floor - 1);   //<- Рекурсия
	cout << floor << endl; //<- Рекурсивный возврат
}

int factorial(int n)
{
	/*if (n == 0)return 1;
	return n * factorial(n-1);*/
	return n == 0 ? 1 : n * factorial(n - 1);
	
}

double power(int a, int n)
{
	/*if (n == 0)return 1;
	if (n < 0)return 1.0 / a * power(a, n + 1);
	return a * power(a, n - 1);*/
	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1.0 / a * power(a, n + 1);
}

void Fibonacci(int n/*, int a = 0, int b = 1*/)
{
	static int a = 0, b = 1, c = 1;
	if (a > n)return;
	cout << a << "\t";
	
	/*a = b;
	b = c;
	c = a + b;*/
	c = (a = b) + (b = c);
	Fibonacci(n/*, b, a + b*/);
}

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef FLOOR
	cout << "Hello World";
	main();

	int floor;
	cout << "Введите номер этажа: "; cin >> floor;
	elevator(floor);
#endif // FLOOR

#ifdef FACTORIAL
	int n;
	cout << "Введите число для вычисления Факториала: "; cin >> n;
	cout << factorial(n) << endl;
#endif // FACTORIAL

#ifdef POWER
	int a;
	int n;
	cout << "Введите основание и показатель степени: "; cin >> a >> n;
	cout << power(a, n) << endl;
#endif // POWER

	int n;
	cout << "До какого предела вывести ряд Фибоначчи? "; cin >> n;
	Fibonacci(n);
	
}
	


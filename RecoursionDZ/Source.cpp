#include<iostream>
using namespace std;


int Factorial(int number)
{
	if (number < 1) return 0;
	else if (number == 1) return 1;
	else return number * Factorial(number - 1);
}
int Power(long long number1, long long degree)
{
	if (degree < 0)return -1;
	else if (degree == 0)return 0;
	else if (degree == 1)return number1;
	else return number1 * Power(number1, degree - 1);
}
unsigned int Fibonacci(unsigned int n)
{
	return n < 2 ? n : Fibonacci(n - 2) + Fibonacci(n - 1);
	
}


void main()
{
	setlocale(LC_ALL, "Russian");

	//Факториал
	int number;
	cout << "Введите число: "; cin >> number;
	cout << "Факториал числа " << number << "! = " << Factorial(number) << endl;
	
	//Возведение в степень
	long long number1;
	long long degree;
	cout << "Число, которое вы хотите возвести в степень: "; cin >> number1;
	cout << "Число, которое возводит в степень: "; cin >> degree;
	cout << "Число " << number1 << " в степени " << degree << " = " << Power(number1, degree) << endl;
	
	unsigned int N;
	cout << "Введите порядковое число до которого хотите вывести ряд Фибоначчи: "; cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << Fibonacci(i) << " ";
	}
	
}


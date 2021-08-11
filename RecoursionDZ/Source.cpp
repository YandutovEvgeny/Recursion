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

	//���������
	int number;
	cout << "������� �����: "; cin >> number;
	cout << "��������� ����� " << number << "! = " << Factorial(number) << endl;
	
	//���������� � �������
	long long number1;
	long long degree;
	cout << "�����, ������� �� ������ �������� � �������: "; cin >> number1;
	cout << "�����, ������� �������� � �������: "; cin >> degree;
	cout << "����� " << number1 << " � ������� " << degree << " = " << Power(number1, degree) << endl;
	
	unsigned int N;
	cout << "������� ���������� ����� �� �������� ������ ������� ��� ���������: "; cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << Fibonacci(i) << " ";
	}
	
}


#include<iostream>
using namespace std;

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


void main()
{
	setlocale(LC_ALL, "Russian");
	/*cout << "Hello World";
	main();*/

	int floor;
	cout << "Введите номер этажа: "; cin >> floor;
	elevator(floor);
}
	


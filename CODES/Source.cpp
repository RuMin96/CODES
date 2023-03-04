#include<iostream>
#include<conio.h>
using namespace std;
//#define PALINDROM
//#define HAPPY_TICKET
#define DZZZZZZZ

void main()
{
	setlocale(LC_ALL, "");
#ifdef PALINDROM
	int number;
	int reverse = 0;
	cout << "Введите число"; cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Палиндром" << endl;
	}
	else
	{
		cout << "Не палиндром" << endl;
	}
#endif


#ifdef HAPPY_TICKET
	int order;
	int first_part;
	int second_part;
	cout << "Введите ваш счастливый билет"; cin >> order;
	first_part = order / 1000;
	second_part = order % 1000;
	cout << first_part << endl;
	cout << second_part << endl;
	if (second_part = first_part)
	{
		cout << "У вас счастливый билет" << endl;
	}
	else
	{
		cout << "У вас не счасливый билет" << endl;
	}
#endif

#ifdef DZZZZZZZ

	char key;
	do
	{
		key = _getch();

		if (key == 'w')
		{
			cout << "Вперед" << endl;
		}
		else if (key == 's')
		{
			cout << "Назад" << endl;

		}
		else if (key == 'a')
		{
			cout << "Влево" << endl;
		}
		else if (key == 'd')
		{
			cout << "Вправо" << endl;
		}
		else if (key == 32)
		{
			cout << "Прыжок" << endl;
		}
		else if (key == 13)
		{
			cout << "Огонь" << endl;
		}
	} while (key != 27);

#endif
}
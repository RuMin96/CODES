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
	cout << "������� �����"; cin >> number;
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
		cout << "���������" << endl;
	}
	else
	{
		cout << "�� ���������" << endl;
	}
#endif


#ifdef HAPPY_TICKET
	int order;
	int first_part;
	int second_part;
	cout << "������� ��� ���������� �����"; cin >> order;
	first_part = order / 1000;
	second_part = order % 1000;
	cout << first_part << endl;
	cout << second_part << endl;
	if (second_part = first_part)
	{
		cout << "� ��� ���������� �����" << endl;
	}
	else
	{
		cout << "� ��� �� ��������� �����" << endl;
	}
#endif

#ifdef DZZZZZZZ

	char key;
	do
	{
		key = _getch();

		if (key == 'w')
		{
			cout << "������" << endl;
		}
		else if (key == 's')
		{
			cout << "�����" << endl;

		}
		else if (key == 'a')
		{
			cout << "�����" << endl;
		}
		else if (key == 'd')
		{
			cout << "������" << endl;
		}
		else if (key == 32)
		{
			cout << "������" << endl;
		}
		else if (key == 13)
		{
			cout << "�����" << endl;
		}
	} while (key != 27);

#endif
}
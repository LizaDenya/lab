﻿#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int first();
int second();
int third();
int fourth();
int fifth();

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Введите номер задания\n"; //ура, я научилась писать на русском, спасибо мом одногруппникам
	int number;
	cin >> number;
	if (number == 1) first();
	if (number == 2) second();
	if (number == 3) third();
	if (number == 4) fourth();
	if (number == 5) fifth();
	return 0;
}

int first() {
	int a, b;
	string s;
	cout << "Введите число и месяц \n";
	cin >> a >> b;
	if ((a > 9) and (a < 20))
	{                                     
		if (a == 10)
		{
			s = "Десятое ";
		}
		if (a == 11)
		{
			s = "Одиннадцатое ";
		}
		if (a == 12)
		{
			s = "Двенадцатое ";
		}
		if (a == 13)
		{
			s = "Тринадцатое ";
		}
		if (a == 14)
		{
			s = "Четырнадцатое ";
		}
		if (a == 15)
		{
			s = "Пятнадцатое ";
		}
		if (a == 16)
		{
			s = "Шестнадцатое ";
		}
		if (a == 17)
		{
			s = "Семнадцатое ";
		}
		if (a == 18)
		{
			s = "Восемнадцатое ";
		}
		if (a == 19)
		{
			s = "Девятнадцатое ";
		}
	}
	else
	{
		if ((a > 19) and (a < 30))
		{
			s = "Двадцат";
		}
		if (a > 29)
		{
			s = "Тридцат";
		}
		if ((a > 19) or (a < 10))
		{
			if ((a == 20) or (a == 30))
			{
				s = s + "ое ";
			}
			else
			{
				if (a > 19)
					s = s + "ь ";
				if (a % 10 == 1)
				{
					s = s + "первое ";
				}
				if (a % 10 == 2)
				{
					s = s + "второе ";
				}
				if (a % 10 == 3)
				{
					s = s + "третье ";
				}
				if (a % 10 == 4)
				{
					s = s + "четвертое ";
				}
				if (a % 10 == 5)
				{
					s = s + "пятое ";
				}
				if (a % 10 == 6)
				{
					s = s + "шестое ";
				}
				if (a % 10 == 7)
				{
					s = s + "седьмое ";
				}
				if (a % 10 == 8)
				{
					s = s + "восьмое ";
				}
				if (a % 10 == 9)
				{
					s = s + "девятое ";
				}
			}
		}
	}
	if (b == 1)
	{
		s = s + "января";
	}
	if (b == 2)
	{
		s = s + "февраля";
	}
	if (b == 3)
	{
		s = s + "марта";
	}
	if (b == 4)
	{
		s = s + "апреля";
	}
	if (b == 5)
	{
		s = s + "мая";
	}
	if (b == 6)
	{
		s = s + "июня";
	}
	if (b == 7)
	{
		s = s + "июля";
	}
	if (b == 8)
	{
		s = s + "августа";
	}
	if (b == 9)
	{
		s = s + "сентября";
	}
	if (b == 10)
	{
		s = s + "октября";
	}
	if (b == 11)
	{
		s = s + "ноября";
	}
	if (b == 12)
	{
		s = s + "декабря";
	}
	cout << s;
	return 0;
}

int second() {
	{
		int a, b;
		string s;
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		setlocale(LC_ALL, "rus");
		cout << "Введите напрвление и команду \n";
		cin >> s >> a;
		if (s == "С")
		{
			b = 1;
		}
		if (s == "В")
		{
			b = 2;
		}
		if (s == "Ю")
		{
			b = 3;
		}
		if (s == "З")
		{
			b = 4;
		}
		b = b + a;
		if (b == 1)
		{
			cout << "С";
		}
		if (b == 2)
		{
			cout << "В";
		}
		if (b == 3)
		{
			cout << "Ю";
		}
		if ((b == 4) or (b == 0))
		{
			cout << "З";
		}
		return 0;
	}
}

int third() {
	{
		int a;
		string s;
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		setlocale(LC_ALL, "rus");
		cout << "Введите количество заданий \n ";
		cin >> a;
		if (a < 20)
		{
			if (a == 10)
			{
				s = "Десять ";
			}
			if (a == 11)
			{
				s = "Одиннадцать ";
			}
			if (a == 12)
			{
				s = "Двенадцать ";
			}
			if (a == 13)
			{
				s = "Тринадцать ";
			}
			if (a == 14)
			{
				s = "Четырнадцать ";
			}
			if (a == 15)
			{
				s = "Пятнадцать ";
			}
			if (a == 16)
			{
				s = "Шестнадцать ";
			}
			if (a == 17)
			{
				s = "Семнадцать ";
			}
			if (a == 18)
			{
				s = "Восемнадцать ";
			}
			if (a == 19)
			{
				s = "Девятнадцать ";
			}
			s = s + "учебных заданий";
		}
		else
		{
			if ((a > 19) and (a < 30))
			{
				s = "Двадцать ";
			}
			if ((a > 29) and (a < 40))
			{
				s = "Тридцать ";
			}
			if ((a > 39) and (a < 50))
			{
				s = "Сорок ";
			}
			a = a - (a / 10) * 10;
			if (a == 0)
			{
				s = s + "учебных заданий";
			}
			if (a == 1)
			{
				s = s + "одно учебное задание";
			}
			if (a == 2)
			{
				s = s + "два учебных задания";
			}
			if (a == 3)
			{
				s = s + "три учебных задания";
			}
			if (a == 4)
			{
				s = s + "четыре учебных задания";
			}
			if (a == 5)
			{
				s = s + "пять учебных заданий";
			}
			if (a == 6)
			{
				s = s + "шесть учебных заданий";
			}
			if (a == 7)
			{
				s = s + "семь учебных заданий";
			}
			if (a == 8)
			{
				s = s + "восемь учебных заданий";
			}
			if (a == 9)
			{
				s = s + "девять учебных заданий";
			}
		}
		cout << s;
		return 0;
	}
}

int fourth() {
	{
		int a;
		string s;
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		setlocale(LC_ALL, "rus");
		cout << "Введите число \n";
		cin >> a;
		if (a / 100 == 1)
		{
			s = "Cто ";
		}
		if (a / 100 == 2)
		{
			s = "Двести ";
		}
		if (a / 100 == 3)
		{
			s = "Триста ";
		}
		if (a / 100 == 4)
		{
			s = "Четыреста ";
		}
		if (a / 100 == 5)
		{
			s = "Пятьсот ";
		}
		if (a / 100 == 6)
		{
			s = "Шестьсот ";
		}
		if (a / 100 == 7)
		{
			s = "Семьсот ";
		}
		if (a / 100 == 8)
		{
			s = "Восемьсот ";
		}
		if (a / 100 == 9)
		{
			s = "Девятьсот ";
		}
		a = a - (a / 100) * 100;
		if ((a > 9) and (a < 20))
		{
			if (a == 10)
			{
				s = s + "десять";
			}
			if (a == 11)
			{
				s = s + "одиннадцать";
			}
			if (a == 12)
			{
				s = s + "двенадцать";
			}
			if (a == 13)
			{
				s = s + "тринадцать";
			}
			if (a == 14)
			{
				s = s + "четырнадцать";
			}
			if (a == 15)
			{
				s = s + "пятнадцать";
			}
			if (a == 16)
			{
				s = s + "шестнадцать";
			}
			if (a == 17)
			{
				s = s + "семнадцать";
			}
			if (a == 18)
			{
				s = s + "восемнадцать";
			}
			if (a == 19)
			{
				s = s + "девятнадцать";
			}
		}
		else
		{
			if ((a > 19) and (a < 30))
			{
				s = s + "двадцать ";
			}
			if ((a > 29) and (a < 40))
			{
				s = s + "тридцать ";
			}
			if ((a > 39) and (a < 50))
			{
				s = s + "сорок ";
			}
			if ((a > 49) and (a < 60))
			{
				s = s + "пятьдесят ";
			}
			if ((a > 59) and (a < 70))
			{
				s = s + "шестьдесят ";
			}
			if ((a > 69) and (a < 80))
			{
				s = s + "семьдесят ";
			}
			if ((a > 79) and (a < 90))
			{
				s = s + "восемьдесят ";
			}
			if (a > 89)
			{
				s = s + "девяносто ";
			}
			a = a - (a / 10) * 10;
			if (a == 1)
			{
				s = s + "один";
			}
			if (a == 2)
			{
				s = s + "два";
			}
			if (a == 3)
			{
				s = s + "три";
			}
			if (a == 4)
			{
				s = s + "четыре";
			}
			if (a == 5)
			{
				s = s + "пять";
			}
			if (a == 6)
			{
				s = s + "шесть";
			}
			if (a == 7)
			{
				s = s + "семь";
			}
			if (a == 8)
			{
				s = s + "восемь";
			}
			if (a == 9)
			{
				s = s + "девять";
			}
		}
		cout << s;
		return 0;
	}
}

int fifth() {
	{
		int a;
		string s;
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		setlocale(LC_ALL, "rus");
		cout << "Введите год \n ";
		cin >> a;
		s = "год ";
		a = (a - 3) % 60;
		if ((a > 0) and (a <= 12))
		{
			s = s + "зелен";
		}
		if ((a > 12) and (a <= 24))
		{
			s = s + "красн";
		}
		if ((a > 24) and (a <= 36))
		{
			s = s + "желт";
		}
		if ((a > 36) and (a <= 48))
		{
			s = s + "бел";
		}
		if ((a > 48) and (a < 60) or (a == 0))
		{
			s = s + "черн";
		}
		a = a % 12;
		if (a == 1)
		{
			s = s + "ой крысы";
		}
		if (a == 2)
		{
			s = s + "ой коровы";
		}
		if (a == 3)
		{
			s = s + "ого тигра";
		}
		if (a == 4)
		{
			s = s + "ого зайца";
		}
		if (a == 5)
		{
			s = s + "ого дракона";
		}
		if (a == 6)
		{
			s = s + "ой змеи";
		}
		if (a == 7)
		{
			s = s + "ой лошади";
		}
		if (a == 8)
		{
			s = s + "ой овцы";
		}
		if (a == 9)
		{
			s = s + "ой обезьяны";
		}
		if (a == 10)
		{
			s = s + "ой курицы";
		}
		if (a == 11)
		{
			s = s + "ой собаки";
		}
		if (a == 0)
		{
			s = s + "ой свиньи";
		}
		cout << s;
		return 0;
	}

}
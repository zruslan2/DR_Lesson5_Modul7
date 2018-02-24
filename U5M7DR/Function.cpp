#include <vector>
#include <time.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

int i, j;

enum type_number { positive, negative, all };

void head(char mas[])
{
	int len, third, s1_len, s2_len, s3_len, maks;
	len = strlen(mas);
	third = len / 3;
	s1_len = third;
	for (int i = s1_len; i < len; i++)
	{
		if (mas[s1_len] != ' ') s1_len++;
		else break;
	}
	s2_len = third;
	for (int i = s1_len + s2_len; i < len; i++)
	{
		if (mas[s1_len + s2_len] != ' ') s2_len++;
		else break;
	}
	s3_len = len - (s1_len + s2_len);
	vector<char>str1(s1_len);
	vector<char>str2(s2_len);
	vector<char>str3(s3_len);
	for (int i = 0; i < s1_len; i++)
	{
		str1[i] = mas[i];
	}
	for (int i = s1_len + 1; i < s1_len + s2_len; i++)
	{
		str2[i - (s1_len + 1)] = mas[i];
	}
	for (int i = s1_len + s2_len + 1; i < len; i++)
	{
		str3[i - (s1_len + s2_len + 1)] = mas[i];
	}
	maks = s1_len;
	if (s2_len > maks)maks = s2_len;
	if (s3_len > maks)maks = s3_len;
	system("cls");
	SetConsoleTextAttribute(hConsole, 11);
	setlocale(LC_ALL, ".866");
	cout << " Ъ";
	for (int i = 0; i <= maks + 1; i++)cout << "Д";
	cout << "ї\n";
	cout << " і "; setlocale(LC_ALL, ".1251");
	for (int i = 0; i<s1_len; i++) cout << str1[i];
	if (s1_len < maks)
	{
		for (int i = 0; i < maks - s1_len; i++)cout << " ";
	}
	setlocale(LC_ALL, ".866"); cout << " і\n";
	cout << " і "; setlocale(LC_ALL, ".1251");
	for (int i = 0; i<s2_len; i++) cout << str2[i];
	if (s2_len < maks)
	{
		for (int i = 0; i < maks - s2_len; i++)cout << " ";
	}
	setlocale(LC_ALL, ".866"); cout << " і\n";
	cout << " і "; setlocale(LC_ALL, ".1251");
	for (int i = 0; i<s3_len; i++) cout << str3[i];
	if (s3_len < maks)
	{
		for (int i = 0; i < maks - s3_len; i++)cout << " ";
	}
	setlocale(LC_ALL, ".866"); cout << " і\n";
	cout << " А";
	for (int i = 0; i <= maks + 1; i++)cout << "Д";
	cout << "Щ\n";
	SetConsoleTextAttribute(hConsole, 15);
	setlocale(LC_ALL, ".1251");
}

void yellow()
{
	SetConsoleTextAttribute(hConsole, 14);
}

void white()
{
	SetConsoleTextAttribute(hConsole, 15);
}

void red()
{
	SetConsoleTextAttribute(hConsole, 12);
}

void green()
{
	SetConsoleTextAttribute(hConsole, 11);
}

void hex(char*arr, int numb)
{
	int rez, ost, step=0;
	rez = numb;
	while (rez > 15)
	{
		if (rez < 15)ost = rez;
		ost = rez % 16;
		rez = rez / 16;
		if(ost<10)
		    arr[step] = ost+'0';
		else if(ost==10)
			arr[step] = 'A';
		else if (ost == 11)
			arr[step] = 'B';
		else if (ost == 12)
			arr[step] = 'C';
		else if (ost == 13)
			arr[step] = 'D';
		else if (ost == 14)
			arr[step] = 'E';
		else if (ost == 15)
			arr[step] = 'F';

		step++;

		if (rez < 15)
		{
			ost = rez;			
			if (ost<10)
				arr[step] = ost + '0';
			else if (ost == 10)
				arr[step] = 'A';
			else if (ost == 11)
				arr[step] = 'B';
			else if (ost == 12)
				arr[step] = 'C';
			else if (ost == 13)
				arr[step] = 'D';
			else if (ost == 14)
				arr[step] = 'E';
			else if (ost == 15)
				arr[step] = 'F';
		}
		
	}
	int st=0, end = step, kol = step / 2;
	char vrem;
	for (int i = 0; i <= kol; i++)
	{
		vrem = arr[end];
		arr[end] = arr[st];
		arr[st] = vrem;
		st++;
		end--;
	}
	arr[step + 1] = '\0';
}

int vozr()
{
	int v;
	cout << "Введите возраст "; cin >> v;
	if (v >= 18 && v <= 30) return v;
	else vozr();
}

void numbers(int n)
{
	int sum = 0, max, ch;
	for (int i = 0; i < n; i++)
	{
		cout << "Введите число "; cin >> ch;
		sum += ch;
		if (i == 0) max = ch;
		else
		{
			if (ch > max)max = ch;
		}
	}
	yellow();
	cout <<"Сумма чисел = "<< sum << endl;
	green();
	cout <<"Максимальное из них "<< max << endl;
	white();
}
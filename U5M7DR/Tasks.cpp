#include <stdio.h>
#include <iostream>
#include <time.h>
#include "MyFunc.h"

using namespace std;
unsigned short int nz;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));

	int i, j;
	while (true)
	{
		cout << "������� ����� �������, 0 - ��� ������ "; cin >> nz;

		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*�������� �������� ��������� �� C, ������� ��������� � ��������������(������ 
			������������� ��� ��������) double, int � char.����� �������� � ��������������� 
			��������� �� ������ �� ��� ����������.����� ���� ��������� ������ ����������� 
			����� � �������� ����������� � ������ � ������ ������(� ������) ������ �� ����� 
			����������.*/
			head("�������� �������� ��������� �� C, ������� ��������� � �������������� (������ ������������� ��� ��������) double, int � char. ����� �������� � ��������������� ��������� �� ������ �� ��� ����������. ����� ���� ��������� ������ ����������� ����� � �������� ����������� � ������ � ������ ������ (� ������) ������ �� ����� ����������.");
			int A=56;
			double B=56.456;
			char C='Y';
			int* ptrA=&A;
			double* ptrB=&B;
			char* ptrC=&C;
			rsize_t s;
			s = sizeof(A);
			yellow();
			printf("����� ���������� A - %p, �������� ���������� A - %d, ������ ���������� A - %i �����\n\n", &A, A, s);
			s = sizeof(ptrA);	
			printf("����� ���������� ptrA - %p, �������� ���������� ptrA - %p, ������ ���������� ptrA - %i �����\n\n", &ptrA, ptrA, s);
			s = sizeof(B);		
			green();
			printf("����� ���������� B - %p, �������� ���������� B - %g, ������ ���������� B - %i �����\n\n", &B, B, s);
			s = sizeof(ptrB);			
			printf("����� ���������� ptrB - %p, �������� ���������� ptrB - %p, ������ ���������� ptrB - %i �����\n\n", &ptrB, ptrB, s);
			s = sizeof(C);
			red();
			printf("����� ���������� C - %p, �������� ���������� C - %c, ������ ���������� C - %i �����\n\n", &C, C, s);
			s = sizeof(ptrC);
			printf("����� ���������� ptrC - %p, �������� ���������� ptrC - %p, ������ ���������� ptrC - %i �����\n\n", &ptrC, ptrC, s);
			white();
		}
		else if (nz == 2)
		{
			/*����������� ������������ �������������� �0x% x� ��� ������ ������� � ����������������� 
			�������.�� ������ ������ ������, ������� �������� �������� ��� : �0xbfe55918�.
			��������� ������� �0x� ������� ���, ��� ������������ ����������������� �������; 
			������� ���� ������ �����.*/
			head("����������� ������������ �������������� �0x% x� ��� ������ ������� � ����������������� �������. �� ������ ������ ������, ������� �������� �������� ���: �0xbfe55918�. ��������� ������� �0x� ������� ���, ��� ������������ ����������������� �������; ������� ���� ������ �����.");
			int mas[8];
			int *ptrM = mas;
			yellow();
			for (int i = 0; i < 8; i++)
			{
				printf("0x%p\n", ptrM);
				ptrM++;
			}
			white();
		}
		else if (nz == 3)
		{
			/*����������� �������� sizeof ��� ����������� ������� ������, ���������� ��� 
			������� ����������.*/
			head("����������� �������� sizeof ��� ����������� ������� ������, ���������� ��� ������� ����������.");
			int A;
			float B;
			double C;
			char D;
			bool E;
			yellow();
			printf("������������� ���������� �������� ������ � ������ (����) - %i\n", sizeof(A));
			printf("���������� float �������� ������ � ������ (����) - %i\n", sizeof(B));
			printf("���������� double �������� ������ � ������ (����) - %i\n", sizeof(C));
			printf("���������� char �������� ������ � ������ (����) - %i\n", sizeof(D));
			printf("���������� bool �������� ������ � ������ (����) - %i\n", sizeof(E));
			white();
		}
		else if (nz == 4)
		{
			/*�������� ��������� � C, ����� ������������� ���������� ����� � �����������������.*/
			head("�������� ��������� � C, ����� ������������� ���������� ����� � �����������������.");
			char mas[10]; int n;
			for (int i = 0; i < 8; i++)
			{
				n = 1 + rand() % 1000000;
				hex(mas, n);
				printf("����� � ���������� ������� - %d, ������������ � ����������������� - %s\n", n, mas);
			}		
			printf("\n");
		}		
		else if (nz == 5)
		{
			/*�������� ��������� c ��� ����� � ������ ��������, ������� ������ ���� ������ 18 � 
			����� 30 ���, ���������� ��������� ���������� �������� � ������ ������� ���������� 
			�� ��� ���, ���� �������� �������� �� ����� ��������������.*/
			head("�������� ��������� c ��� ����� � ������ ��������, ������� ������ ���� ������ 18 � ����� 30 ���, ���������� ��������� ���������� �������� � ������ ������� ���������� �� ��� ���, ���� �������� �������� �� ����� ��������������.");
			int voz;
			voz = vozr();
			yellow();
			cout <<"�� ����� "<<voz << endl;
			white();
		}
		else if (nz == 6)
		{
			/*�������� ��������� c ��� ����� n �����, ����������� �� ����� � ���������� �����, 
			�� �������� �� � �������.*/
			head("�������� ��������� c ��� ����� n �����, ����������� �� ����� � ���������� �����, �� �������� �� � �������.");
			int n = 4;
			numbers(n);
		}
		else
		{
			red();
			cout << "������ ������� �� ���������� \n";
			white();
		}
	}
}
#include <iostream>
#include<time.h>
#include "FillRand.h"
#include "Copy.h"
#include "Print.h"
#include "Print.cpp" 
#include "OddorEven.h"
#include "Auxiliary.h"
#include "Push_arr.h"


using namespace std;
///**********************************************************************************************/
///**********************************************************************************************/
//#define INTx1
#define INTx1_ADD_ELEM
/**********************************************************************************************/

void main()
{
	setlocale(LC_ALL, "Russian");
	system("color 0A");
	Font(36);
	/////////////////////////

#ifdef INTx1
	G_INTx1:	

	const int n = 10;
	int ne = 0;
	int no = 0;
	int Arr[n];
	srand(time(NULL)); //��������� ������ ���
	FillRand(Arr, n);	
	std::cout << "���������� ����� ���� int �� 10 ���������" << std::endl;
	Print(Arr, n);
	W_line();

	
	int* Earr = new int[ne];
	int* Oarr = new int[no];
	

	std::cout << "����� odd" << std::endl;		
	Print(Earr, ne);
	W_line();

	std::cout << "����� even" << std::endl;	
	Print(Oarr, no);
	W_line();

	delete[] Earr;
	delete[] Oarr;

	std::cout << " ��� ������� ������� 1: ";
	if (_getch() == '1')
	{
	    //Sleep(1000);
		system("cls");
		goto G_INTx1;
}

	system("cls");

#endif // INTx1
#ifdef INTx1_ADD_ELEM
	G_INTx1_ADD :


			int ne;

			cout << "������� ����� ��������� �������: ";
			cin >> ne;
			int* Earr = new int[ne];
			FillRand(Earr, ne);
			Print(Earr, ne);

			int value;
			cout << "������� �������� ������������ ��������: ";
			cin >> value;
			
			std::cout << "����� Err" << std::endl;			
			Print(Earr, ne);
			W_line();

			Earr = push(Earr, ne, value);
			std::cout << "����� Err" << std::endl;
			Print(Earr, ne);
			W_line();

			delete[] Earr;
			
			std::cout << " ��� ������� ������� 1: ";
			if (_getch() == '1')
			{				
				system("cls");
				goto G_INTx1_ADD;
			}

			system("cls");
#endif // INTx1_ADD_ELEM



 End();
 Blink();
////////////////////////
}


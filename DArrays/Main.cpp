#include <iostream>
#include "FillRand.h"

#include "Print.h"
#include "Print.cpp" 
#include "OddorEven.h"

#include "Auxiliary.h"


using namespace std;
///**********************************************************************************************/
///**********************************************************************************************/
#define INTx1
//#define DINAMICARR
/**********************************************************************************************/

void main()
{
	setlocale(LC_ALL, "Russian");
	/////////////////////////
#ifdef INTx1
	G_INTx1:

	std::cout << "Одномерный масив типа int на 10 элементов"<< std::endl;
	//W_line();

	const int n = 10;
	int ne = 0;
	int no = 0;
	int Arr[n];
	FillRand(Arr, n);
	OdEven(Arr, n, no, ne);
	Print(Arr, n);
	W_line();

	std::cout << "масив even" << std::endl;	
	int* Earr = new int[ne];
	Print(Earr, ne);
	W_line();

	std::cout << "масив even" << std::endl;
	int* Oarr = new int[no];
	Print(Oarr, no);
	W_line();


	std::cout << " Для повтора Нажмите 1: ";
	if (_getch() == '1')
	{
		system("cls");
		goto G_INTx1;
}

	system("cls");

#endif // INTx1
	///////////////////////////
#ifdef DINAMICARR
	Din_INTx1:

	std::cout << "\t\tДинамический одномерный масив типа int";
	W_line();
	int num;
	std::cout << " Введите размер массива: ";
	std::cin >> num;
	int* Darr = new int[num];
	FillRand(Darr,num);
	
	for (int i = 0; i < num; i++)
	{
		std::cout << "\t Адрес = " << Darr + i << "| Значение = " << *(Darr + i) << std::endl;
	}
	delete[] Darr;
	std::cout << " Для повтора Нажмите 1: ";
	if (_getch() == '1')
	{
		system("cls");
		goto Din_INTx1;
	}

	system("cls");

#endif // DINAMICARR
	

 /*End();
 Blink()*/;
////////////////////////
}


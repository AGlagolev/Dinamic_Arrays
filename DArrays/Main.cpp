#include <iostream>
#include "FillRand.h"
#include "Copy.h"
#include "Print.h"
#include "Print.cpp" 
#include "OddorEven.h"
#include "Auxiliary.h"

using namespace std;
///**********************************************************************************************/
///**********************************************************************************************/
#define INTx1

/**********************************************************************************************/

void main()
{
	setlocale(LC_ALL, "Russian");
	/////////////////////////
#ifdef INTx1
	G_INTx1:	

	const int n = 10;
	int ne = 0;
	int no = 0;
	int Arr[n];

	FillRand(Arr, n);	
	std::cout << "Одномерный масив типа int на 10 элементов" << std::endl;
	Print(Arr, n);
	W_line();

	OdEven(Arr, n, no, ne);
	int* Earr = new int[ne];
	int* Oarr = new int[no];
	CopyAr(Arr, n, Earr, Oarr);

	std::cout << "масив even" << std::endl;		
	Print(Earr, ne);
	W_line();

	std::cout << "масив odd" << std::endl;	
	Print(Oarr, no);
	W_line();

	delete[] Earr;
	delete[] Oarr;

	std::cout << " Для повтора Нажмите 1: ";
	if (_getch() == '1')
	{
		system("cls");
		goto G_INTx1;
}

	system("cls");

#endif // INTx1
	

 End();
 Blink();
////////////////////////
}


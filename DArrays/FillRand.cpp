#include "FillRand.h"
//РЕАЛИЗАЦИЯ ФУНКЦИИ FillRand

void FillRand(int Arr[], const int n)
{		
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 100;
	}
}


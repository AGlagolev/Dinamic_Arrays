#include "FillRand.h"
//���������� ������� FillRand

void FillRand(int Arr[], const int n)
{		
	//���������� ������� ���������� �������:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 100;
	}
}


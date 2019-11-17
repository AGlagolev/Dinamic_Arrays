#include "Push_arr.h"

//–≈¿À»«¿÷»ﬂ ‘”Õ ÷»» push
int* push(int* Arr, int &n, int val)
{
	int* BuffArr = new int[n+1];
	for (int i = 0; i < n; i++)
	{
		BuffArr[i] = Arr[i];
	}
	
	delete[] Arr;
	BuffArr[n] = val;
	n++;
	return(BuffArr);
}
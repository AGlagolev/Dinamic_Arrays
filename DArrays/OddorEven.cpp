#include"OddorEven.h"

//–≈¿À»«¿÷»ﬂ ‘”Õ ÷»» OddEven
void OdEven(int Arr[], const int n, int &oddnumumber, int &evennumber)
{	
	for (int i = 0; i < n; i++)
	{
		if ((Arr[i] % 2) == 0)
		{
			oddnumumber++;
		}
		else
		{
			evennumber++;
		}
	}
	   	
}


#include"OddorEven.h"

//ĞÅÀËÈÇÀÖÈß ØÀÁËÎÍÎÂ ÔÓÍÊÖÈÈ OddEven
void OdEven(int Arr[], const int n, int &oddnumumber, int &evennumber)
{
	//oddnumumber = 0;
	//evennumber = 0;
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


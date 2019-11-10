#include"Copy.h"
#include<iostream>

//пеюкхгюжхъ ьюакнмнб тсмйжхи CopyAr
void CopyAr(int Arr[], const int n, int* Err, int* Orr)
{
	int e = 0;
	int o = 0;
	
	for (int i = 0; i < n; i++)
	{
		if ((Arr[i] % 2) != 0)
		{
			*(Err + e) = Arr[i];
			e++;
		}
		else
		{
			*(Orr + o) = Arr[i];
			o++;
		}
	}


}


#include "Print.h"

//���������� �������� �������  Print
// ��� ���������� �������
template<typename T>
void Print(T Arr[], const int n)
{
	//����� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		std::cout << *(Arr + i) << "\t";
	}
	std::cout << std::endl;
}
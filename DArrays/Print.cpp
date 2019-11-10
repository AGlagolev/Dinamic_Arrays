#include "Print.h"

//–≈јЋ»«ј÷»я ЎјЅЋќЌќ¬ ‘”Ќ ÷»…  Print
// дл€ одномерных масивов
template<typename T>
void Print(T Arr[], const int n)
{
	//¬ывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		std::cout << *(Arr + i) << "\t";
	}
	std::cout << std::endl;
}
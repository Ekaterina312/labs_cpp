#include <iostream>
#include <stdio.h>

int main()
{
	int numberInt, intSize = sizeof(int) * 8, floatSize = sizeof(float) * 8;
	unsigned int maskInt = 1 << intSize - 1;
	unsigned int maskFloat = 1 << floatSize - 1;
	unsigned int order = 32;
	unsigned int maskDouble = 1 << order - 1;

	setlocale(LC_ALL, "Russian");
	std::cout << sizeof(int) << " - байт в памяти занимает тип int" << std::endl;
	std::cout << sizeof(short int) << " - байт в памяти занимает тип short int" << std::endl;
	std::cout << sizeof(long int) << " - байт в памяти занимает тип long int" << std::endl;
	std::cout << sizeof(float) << " - байт в памяти занимает тип float" << std::endl;
	std::cout << sizeof(double) << " - байт в памяти занимает тип double" << std::endl;
	std::cout << sizeof(long double) << " - байт в памяти занимает тип long double" << std::endl;
	std::cout << sizeof(char) << " - байт в памяти занимает тип char" << std::endl;
	std::cout << sizeof(bool) << " - байт в памяти занимает тип bool" << std::endl;

	std::cout << "Введите число типа int" << std::endl;
	std::cin >> numberInt;

	for (int i = 1; i <= intSize; i++)
	{
		putchar(numberInt & maskInt ? '1' : '0');
		numberInt <<= 1;
		if (i % 8 == 0 || i == 1)
			std::cout << " ";
	}
	std::cout << std::endl;

	union
	{
		float numberFloat;
		int numberFloatUseful;
	};
	std::cout << "Введите число типа float" << std::endl;
	std::cin >> numberFloat;

	for (int i = 1; i <= floatSize; i++)
	{
		putchar(numberFloatUseful & maskFloat ? '1' : '0');
		maskFloat = maskFloat >> 1;
		if (i % 8 == 0 || i == 1)
			std::cout << " ";
	}
	std::cout << std::endl;


	union
	{
		double numberDouble;
		int ArrInt[2];
	};
	std::cout << "Введите число типа double" << std::endl;
	std::cin >> numberDouble;
	for (int k = 1; k >= 0; k--)
	{
		maskDouble = 1 << order - 1;
		for (int i = 1; i <= order; i++)
		{
			putchar(ArrInt[k] & maskDouble ? '1' : '0');
			maskDouble >>= 1;
			if ((k == 1 && i == 1) || (k == 1 && i == 12))
			{
				std::cout << " ";
			}
		}
	}
	std::cout << std::endl;
	return 0;
}

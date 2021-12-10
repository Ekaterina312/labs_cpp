#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <chrono>
#include <string>

void createRandArr(int ArrInt[100])
	{
	std::string answer("no");
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		ArrInt[i] = rand() % 199 - 99;
		std::cout << ArrInt[i] << " ";
	
	}
	std::cout << std::endl;
	std::cout << std::endl << "Execute the function createRandArr again?" << std::endl;
	std::cin >> answer;
	if (answer == "yes")
		createRandArr(ArrInt);
	else return;
	}

void bubbleSortArr(int ArrInt[100])
	{
	int number, i = 0;
	std::string answer("no");			
		auto start = std::chrono::high_resolution_clock::now();
		for (int i = 0; i < 99; i++)
		{
			for (int k = i + 1; k < 100; k++)
			{
				if (ArrInt[i] > ArrInt[k])
				{
					number = ArrInt[k];
					ArrInt[k] = ArrInt[i];
					ArrInt[i] = number;
				}
			}
		}
		for (int i = 0; i < 100; i++)
			std::cout << ArrInt[i] << " ";
		auto end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<float> duration = end - start;
		std::cout << std::endl << duration.count() << " - Time spent on sorting with help bubble sort" << std::endl;
		std::cout << std::endl << "Execute the function bubbleSortArr again?" << std::endl;
		std::cin >> answer;
		if (answer == "yes")
			bubbleSortArr(ArrInt);
		else return;
	}

void shakerSortArr(int ArrInt[100])
{
	int number, i = 0;
	std::string answer("no");
	auto start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 100; i++)
	{
		int startOfArray = 0, endOfArray = 100;
		while (startOfArray <= endOfArray)
		{
			for (int i = startOfArray; i < endOfArray - 1; i++)
			{
				if (ArrInt[i - 1] > ArrInt[i])
				{
					number = ArrInt[i - 1];
					ArrInt[i - 1] = ArrInt[i];
					ArrInt[i] = number;
				}
			}
			endOfArray--;
			for (int i = endOfArray - 1; i > startOfArray; i--)
			{
				if (ArrInt[i] > ArrInt[i + 1])
				{
					number = ArrInt[i + 1];
					ArrInt[i + 1] = ArrInt[i];
					ArrInt[i] = number;
				}
			}
			startOfArray++;
		}
	}
	for (int i = 0; i < 100; i++)
		std::cout << ArrInt[i] << " ";
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<float> duration = end - start;
	std::cout << std::endl << duration.count() << " - Time spent on sorting with help shaker sort" << std::endl;
	std::cout << std::endl << "Execute the function shakerSortAr again?" << std::endl;
	std::cin >> answer;
	if (answer == "yes")
		shakerSortArr(ArrInt);
	else return;
}

void findMaxEl(int ArrInt[100])
	{
	int max = ArrInt[1];
	std::string answer("no");
	auto start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 100; ++i)
	{
		if (ArrInt[i] > max)
			max = ArrInt[i];
	}
	std::cout << max << " - Maximum array element" << std::endl;
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<float> duration = end - start;
	std::cout << std::endl << duration.count() << " - Time spent on finding maximum array element" << std::endl;
	std::cout << std::endl << "Execute the function findMaxEl again?" << std::endl;
	std::cin >> answer;
	if (answer == "yes")
		findMaxEl(ArrInt);
	else return;
	}

void findMaxElSortedArr(int ArrInt[100])
{
	int max = ArrInt[1];
	std::string answer("no");
	auto start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 100; ++i)
	{
		if (ArrInt[i] > max)
			max = ArrInt[i];
	}
	std::cout << max << " - Maximum array element" << std::endl;
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<float> duration = end - start;
	std::cout << std::endl << duration.count() << " - Time spent on finding maximum array element in a sorted array" << std::endl;
	std::cout << std::endl << "Execute the function findMaxElSortedArr again?" << std::endl;
	std::cin >> answer;
	if (answer == "yes")
		findMaxElSortedArr(ArrInt);
	else return;
}

void findMinEl(int ArrInt[100])
{
	int min = ArrInt[1];
	std::string answer("no");
	auto start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 100; ++i)
	{
		if (ArrInt[i] < min)
			min = ArrInt[i];
	}
	std::cout << min << " - Minimum array element" << std::endl;
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<float> duration = end - start;
	std::cout << std::endl << duration.count() << " - Time spent on finding minimum array element" << std::endl;
	std::cout << std::endl << "Execute the function findMinEl again?" << std::endl;
	std::cin >> answer;
	if (answer == "yes")
		findMinEl(ArrInt);
	else return;
}

void findMinElSortedArr(int ArrInt[100])
{
	int min = ArrInt[1];
	std::string answer("no");
	auto start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 100; ++i)
	{
		if (ArrInt[i] < min)
			min = ArrInt[i];
	}
	std::cout << min << " - Minimum array element" << std::endl;
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<float> duration = end - start;
	std::cout << std::endl << duration.count() << " - Time spent on finding minimum array element in a sorted array" << std::endl;
	std::cout << std::endl << "Execute the function findMinElSortedArr again?" << std::endl;
	std::cin >> answer;
	if (answer == "yes")
		findMinElSortedArr(ArrInt);
	else return;
}

void findAverageOfMaxAndMin(int ArrInt[100])
{
	int max = ArrInt[1], min = ArrInt[1], mean, quantityOfEqual = 0;
	std::string answer("no");
	for (int i = 0; i < 100; ++i)
	{
		if (ArrInt[i] > max)
			max = ArrInt[i];
		if (ArrInt[i] < min)
			min = ArrInt[i];
	}
	mean = round((max + min)/2);
	std::cout << mean << " - The average of the maximum and minimum element" << std::endl;

	for (int i = 0; i < 100; ++i)
	{
		if (ArrInt[i] == mean)
		{
			std::cout << i << " ";
			quantityOfEqual++;
		}		
	}
	std::cout << std::endl << quantityOfEqual << " - Quantity of elements equal to the average" << std::endl;
	std::cout << std::endl << "Execute the function findAverageOfMaxAndMin again?" << std::endl;
	std::cin >> answer;
	if (answer == "yes")
		findAverageOfMaxAndMin(ArrInt);
	else return;
}

void findQuantityOfElementsLessThanGiven(int number, int ArrInt[100])
{
	int quantityOfElementsLessThanGiven = 0;
	std::string answer("no");

	for (int i = 0; i < 100; ++i)
	{
		if (ArrInt[i] < number)
			quantityOfElementsLessThanGiven++;
	}
	std::cout << quantityOfElementsLessThanGiven << " - Quantity of elements less than " << number << std::endl;	
	std::cout << std::endl << "Execute the function findQuantityOfElementsLessThanGiven again?" << std::endl;
	std::cin >> answer;
	if (answer == "yes")
		findQuantityOfElementsLessThanGiven(number, ArrInt);
	else return;
}

void findQuantityOfElementsMoreThanGiven(int number, int ArrInt[100])
{
	int quantityOfElementsMoreThanGiven = 0;
	std::string answer("no");
	
	for (int i = 0; i < 100; ++i)
	{
		if (ArrInt[i] > number)
			quantityOfElementsMoreThanGiven++;
	}
	std::cout << quantityOfElementsMoreThanGiven << " - Quantity of elements more than " << number << std::endl;
	std::cout << std::endl << "Execute the function findQuantityOfElementsMoreThanGiven again?" << std::endl;
	std::cin >> answer;
	if (answer == "yes")
		findQuantityOfElementsMoreThanGiven(number, ArrInt);
	else return;
}

void findNumberInArr(int number, int ArrInt[100])
{
	bool availability = false;
	std::string answer("no");
	auto start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 100; ++i)
	{
		if (ArrInt[i] == number)
			availability = true;
	}
	if (availability == true)
		std::cout << "The number is in the array" << std::endl;
	else 
		std::cout << "The number is not in the array" << std::endl;
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<float> duration = end - start;
	std::cout << std::endl << duration.count() << " - Time spent on finding number the usual way" << std::endl;
	std::cout << std::endl << "Execute the function findNumberInArr again?" << std::endl;
	std::cin >> answer;
	if (answer == "yes")
		findNumberInArr(number, ArrInt);
	else return;
}

void binarySearch(int number, int ArrInt[100])
{
	bool availability = false;
	int startOfArray = 0, endOfArray = 100, middleOfArray;
	std::string answer("no");
	auto start = std::chrono::high_resolution_clock::now();
	while ((startOfArray <= endOfArray) && (availability != true))
	{
		middleOfArray = (startOfArray + endOfArray) / 2;
		if (number == middleOfArray)
			availability = true;
		else
			if (number < middleOfArray)
				endOfArray = middleOfArray;
			else
				startOfArray = middleOfArray;
	}
	if (availability == true)
		std::cout << "The number is in the array" << std::endl;
	else
		std::cout << "The number is not in the array" << std::endl;
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<float> duration = end - start;
	std::cout << std::endl << duration.count() << " - Time spent on finding number using binary search" << std::endl;
	std::cout << std::endl << "Execute the function findNumberInArr again?" << std::endl;
	std::cin >> answer;
	if (answer == "yes")
		binarySearch(number, ArrInt);
	else return;
}

void swapArrElements(int firstIndex, int secondIndex, int ArrInt[100])
{
	int number;
	std::string answer("no");
	auto start = std::chrono::high_resolution_clock::now();
	number = ArrInt[firstIndex];
	ArrInt[firstIndex] = ArrInt[secondIndex];
	ArrInt[secondIndex] = number;
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<float> duration = end - start;
	std::cout << std::endl << duration.count() << " - Time spent on swap" << std::endl;
	std::cout << std::endl << "Execute the function swapArrElements again?" << std::endl;
	std::cin >> answer;
	if (answer == "yes")
		swapArrElements(firstIndex, secondIndex, ArrInt);
	else return;
}

int main() {
	int ArrInt[100], a, b, indexFirst, indexSecond, numberToFind;
	createRandArr(ArrInt);
	findMaxEl(ArrInt);
	findMinEl(ArrInt);
	findAverageOfMaxAndMin(ArrInt);

	std::cout << "Enter the indices of the elements which need to be swapped" << std::endl;
	std::cin >> indexFirst >> indexSecond;
	swapArrElements(indexFirst, indexSecond, ArrInt);

	bubbleSortArr(ArrInt);
	shakerSortArr(ArrInt);
	findMaxElSortedArr(ArrInt);
	findMinElSortedArr(ArrInt);

	std::cout << "Enter the number" << std::endl;
	std::cin >> a;
	findQuantityOfElementsLessThanGiven(a, ArrInt);
	
	std::cout << "Enter the number" << std::endl;
	std::cin >> b;
	findQuantityOfElementsMoreThanGiven(b, ArrInt);

	std::cout << "Enter the number you need to find" << std::endl;
	std::cin >> numberToFind;
	findNumberInArr(numberToFind, ArrInt);
	binarySearch(numberToFind, ArrInt);
	return 0;
}


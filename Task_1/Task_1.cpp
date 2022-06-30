#include <iostream>

int random(int min, int max)
{
	int k = max - min + 1;
	return rand() % k + min;
}

void myReverse(int arr[], const int SIZE)
{
	for (int i = 0, j = SIZE - 1; i < SIZE / 2 && j >= SIZE / 2; i++, j--)
	{
		int tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
}

int main()
{
	srand(time(0));

	const int SIZE = 10;

	int arr[SIZE];

	std::cout << "Array:\t  ";

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = random(0, 100);
		std::cout << arr[i] << " ";
	}

	myReverse(arr, SIZE);

	std::cout << "\nReversed: ";

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << "\n";
}
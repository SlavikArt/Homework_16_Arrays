#include <iostream>

int random(int min, int max)
{
	int k = max - min + 1;
	return rand() % k + min;
}

int main()
{
	srand(time(0));

	int indexB = 0;

	const int sizeA = 30;
	const int sizeB = 30;

	int a[sizeA];
	int b[sizeB];

	std::cout << "Array A:\t";

	for (int i = 0; i < sizeA; i++)
	{
		a[i] = random(-10, 10);
		std::cout << a[i] << " ";
	}

	for (int i = 0; i < sizeA; i++)
	{
		if (a[i] > 0)
		{
			b[indexB] = a[i];
			indexB++;
		}
	}

	for (int i = 0; i < sizeA; i++)
	{
			if (a[i] == 0)
			{
				b[indexB] = a[i];
				indexB++;
			}
	}

	for (int i = 0; i < sizeA; i++)
	{
			if (a[i] < 0)
			{
				b[indexB] = a[i];
				indexB++;
			}
	}

	std::cout << "\nArray B:\t";

	for (int i = 0; i < sizeA; i++)
	{
		std::cout << b[i] << " ";
	}

	std::cout << "\n";
}
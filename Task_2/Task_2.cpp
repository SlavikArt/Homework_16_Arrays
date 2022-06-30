#include <iostream>

int random(int min, int max)
{
	int k = max - min + 1;
	return rand() % k + min;
}

int main()
{
	srand(time(0));

	const int sizeA = 5;
	const int sizeB = 5;
	const int sizeC = 10;

	int a[sizeA];
	int b[sizeB];
	int c[sizeC];

	std::cout << "Array A:\t";

	for (int i = 0; i < sizeA; i++)
	{
		a[i] = random(0, 100);
		std::cout << a[i] << " ";
	}

	std::cout << "\nArray B:\t";

	for (int i = 0; i < sizeB; i++)
	{
		b[i] = random(0, 100);
		std::cout << b[i] << " ";
	}

	std::cout << "\nArray C:\t";

	for (int i = 0, j = 0, k = 0; i < sizeC; i++)
	{
		if (i % 2 == 0)
		{
			c[i] = a[j];
			j++;
		}
		else
		{
			c[i] = b[k];
			k++;
		}

		std::cout << c[i] << " ";
	}

	std::cout << "\n";
}
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	cout << " начало цикла " << endl;

	for (int i = 0; i < 5; i++)
	{
		if (i == 2)
		{
			continue; // Код не будет выполнятся далее, но будет так же и выход из цикла(Начнется новая иттерация цикла)
		}
		cout << " переменная i = " << i << endl;
	}
}

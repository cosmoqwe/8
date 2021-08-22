#include<iostream>
#include<ctime>
using namespace std;
void main()
{
	srand(time(NULL));
	int size;
	cout << "Size massiv: ";
	cin >> size;
	int* massiv = new int[size];
	int menu, menu2;
	do
	{
		/*system("cls");*/
		cout << "cin menu: ";
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			cout << endl << endl;
			cout << "1 - Input; ";
			cout << "2 - Rand; ";
			cout << "cin menu 2: ";
			cin >> menu2;
			switch (menu2)
			{
			case 1:
			{
				for (int i = 0; i < size; i++)
				{
					cin >> massiv[i];
				}
			}break;
			case 2:
			{
				for (int i = 0; i < size; i++)
				{
					massiv[i] = 1 + rand() % 50;
				}

			}break;
			}
		}break;
		case 2:
		{
			for (int i = 0; i < size; i++)
			{
				cout << massiv[i] << " ";
			}
			system("pause");
		}break;
		case 3:
		{
			int size_buf = 0;
			for (int i = 0; i < size; i++)
			{
				if (massiv[i] % 2 != 0)
				{
					size_buf++;
				}
			}
			int* buf = new int[size_buf];
			int j = 0;
			for (int i = 0; i < size; i++)
			{
				if (massiv[i] % 2 != 0)
				{
					buf[j] = massiv[i];
					j++;
				}
			}
			size = size_buf;
			massiv = new int[size];
			massiv = buf;
		}break;
		case 4:
		{
			int size_buf = 0;
			for (int i = 0; i < size; i++)
			{
				if (massiv[i] % 2 == 0)
				{
					size_buf++;
				}
			}
			int* buf = new int[size_buf];
			int j = 0;
			for (int i = 0; i < size; i++)
			{
				if (massiv[i] % 2 != 0)
				{
					buf[j] = massiv[i];
					j++;
				}
			}
			size = size_buf;
			massiv = new int[size];
			massiv = buf;
		}break;
		}
	} while (menu != 0);
} 
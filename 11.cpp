#include<iostream>
#include<ctime>
using namespace std;
void main()
{
	int size, size2;
	cin >> size;
	cin >> size2;
	int* massiv = new int[size];
	int* massiv2 = new int[size2];
	for (int i = 0; i < size; i++)
	{
		massiv[i] = 1 + rand() % 50;
		cout << massiv[i] << " ";
	}
	cout << endl << endl;
	for (int i = 0; i < size2; i++)
	{
		massiv2[i] = 1 + rand() % 50;
		cout << massiv2[i] << " ";
	}
	cout << endl << endl;
	int size3 = size + size2;
	int* massiv3 = new int[size3];
	for (int i = 0; i < size;i++)
	{
		massiv3[i] = massiv[i];
	}
	for (int j = size; j < size3; j++)
	{
		massiv3[j] = massiv2[j-size];
	}
	for (int i = 0; i < size3; i++)
	{
		cout << massiv3[i] << " ";
	}
}
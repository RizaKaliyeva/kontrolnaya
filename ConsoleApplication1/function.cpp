#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <math.h>
#include <time.h>

using namespace std;

void func(int *arr, int * size, int *summ, int *proiz)
{
	for (int i = 0; i < *size; i++)
	{
		arr[i] = 1+ rand() % 100;
		cout << arr[i] << endl;
	}
	for (int i = 0; i < *size; i++)
	{
		*summ += arr[i];
	}
	cout << *summ << endl;
	for (int j = 0; j < *size; j++)
	{
		*proiz *= arr[j];
	}
	cout << *proiz << endl;
}
void print_arr (int * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = 1 + rand() % 100;
		cout << arr[i] << endl;
	}
}
void print_arr2(int(*arr)[5], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size;j++)
		{
			arr[i][j] = 1 + rand() % 100;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void mas2(int(*arr)[5], int * size, int chet, int nechet, int sr)
{
	for (int i = 0; i < * size; i++)
	{
		for (int j = 0; j < * size;j++)
		{
			arr[i][j] = 1 + rand() % 100;
		}
	}
	int sum = 0, count = 0;
	
	for (int i = 0; i < *size; i++)
	{
		for (int j = 0; j < *size;j++)
		{
			if (arr[i][j] % 2 == 0)
				chet++;
			if (arr[i][j] % 2 != 0)
				nechet++;
			sum += arr[i][j];
			count++;
		}
	}
	sr = sum / count;
	cout << "Kol=vo chet = " << chet << endl;
	cout << "Kol=vo nechet = " << nechet << endl;
	cout << "Sr arif = " << sr << endl;
}
void plusend(char *arr)
{
	strcat(arr, " world."); // добавляем элементы в конец массива
	cout << arr << endl; // выводим массив на экран
}
int func(int(*arr)[5], int * size, int *summ, int *proiz)
{
	for (int i = 0; i < *size; i++)
	{
		for (int j = 0;j < *size;j++)
		{
			arr[i][j] = 1 + rand() % 5;
			cout << arr[i][j] <<"\t";
		}
		cout << endl;
	}
	for (int i = 0; i < *size; i++)
	{
		for (int j = 0;j < *size;j++)
		{
			*summ += arr[i][j];
		}
	}
	cout <<"Summa = " << *summ << endl;
	for (int i = 0; i < *size; i++)
	{
		for (int j = 0; j < *size;j++)
		{
			*proiz *= arr[i][j];
		}
	}
	cout <<"Proiz = " << *proiz << endl;
	return 0;
}
double func(double(*arr)[5], double * size, double *summ, double *proiz)
{
	for (int i = 0; i < *size; i++)
	{
		for (int j = 0;j < *size;j++)
		{
			arr[i][j] = 1 + rand() % 5;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	for (int i = 0; i < *size; i++)
	{
		for (int j = 0;j < *size;j++)
		{
			*summ += arr[i][j];
		}
	}
	cout << "Summa = " << *summ << endl;
	for (int i = 0; i < *size; i++)
	{
		for (int j = 0; j < *size;j++)
		{
			*proiz *= arr[i][j];
		}
	}
	cout << "Proiz = " << *proiz << endl;
	return 0;
}
short int func(short int(*arr)[5], short int * size, short int *summ, short int *proiz)
{
	for (int i = 0; i < *size; i++)
	{
		for (int j = 0;j < *size;j++)
		{
			arr[i][j] = 1 + rand() % 3;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	for (int i = 0; i < *size; i++)
	{
		for (int j = 0;j < *size;j++)
		{
			*summ += arr[i][j];
		}
	}
	cout << "Summa = " << *summ << endl;
	for (int i = 0; i < *size; i++)
	{
		for (int j = 0; j < *size;j++)
		{
			*proiz *= arr[i][j];
		}
	}
	cout << "Proiz = " << *proiz << endl;
	return 0;
}
int summ(int a, int b)
{
	return (a == b) ? b : a + summ(a + 1, b);
}
void deletearr(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = 1 + rand() % 100;
	}
	int ind;
	cout << "S kakogo indexa udalit'?" << endl;
	cin >> ind;
	for (int i = 0; i < size; i++)
	{
		if (i >= ind)
		{
			arr[i] = 0;
		}
	}
	for (int i = 0; i < ind; i++)
	{
		cout << arr[i] << endl;
	}
}
void vstavka(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = 1 + rand() % 100;
	}
	int ind, zn;
	cout << "S kakogo indexa vstavit'?" << endl;
	cin >> ind;
	cout << "Kakoe znachenie vstavit'?" << endl;
	cin >> zn;
	for (int i = 0; i < size; i++)
	{
		if (i == ind)
		{
			arr[i] = zn;
		}
	}
	for (int i = 0; i < ind; i++)
	{
		cout << arr[i] << endl;
	}
}
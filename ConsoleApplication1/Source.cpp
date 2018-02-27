#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <math.h>
#include <time.h>
#include "Header.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));

	int z;
	cout << "Kakoe zadanie?" << endl;
	cin >> z;
	switch (z)
	{
	case 1:
	{
		//17.	Написать функцию, которая получает указатель на массив и его размер, и возвращает сумму и произведение его элементов в двух параметрах - ссылках.
		int size = 10;
		int arr[10];
		int summ = 0, proiz = 1;
		func(arr,&size, &summ, &proiz);

	}
	break;
	case 2:
	{
		/*18.	Такую же функцию как и в 17 задании написать для многомерного массива(подумать в 2 стороны: 1. Перегрузка функций; 2 Ис - пользование указетелей на функйии)
			a.Типа int
			b.Типа double
			c.Типа Shor int*/
		int size = 5;
		int arr[5][5];
		int summ = 0, proiz = 1;
		double arr2[5][5], size2 = 5, sum = 0, pr = 1;
		func(arr, &size, &summ, &proiz);
		func(arr2, &size2, &sum, &pr);
	    short int arr3[5][5], size3 = 5, sum3 = 0, pr3= 1;
		func(arr3, &size3, &sum3, &pr3);

	}
	break;
	case 3:
	{
		//19.	Написать Функции для распечатки массивов, как одномерных, так и двумерных.
		int mas[5], mas1[5][5];
		int size = 5;
		print_arr(mas, 5);
		print_arr2(mas1, 5);
	}
	break;
	case 4:
	{
		/*20.	Написать функцию, которая получает указатель на массив и его размер(зармер при этом не передавать как число, а передавать как ссылку на последний элемент массива), 
			и возвращает количество отрицательных, положительных и нулевых элементов мас - сива, используя механизм ссылок.В данном задании обязательно необходимо 
			использовать enum. (enum должен быть глобаль - ным на все файлы, подумать как это можно сделать не объявляя его везде)*/
	}
	break;
	case 5:
	{
		/*21.	Написать функцию, которая получает указатель на двумерный массив и его размер,
			и возвращает среднее арифметическое эле - ментов массива, а также количество чётных и нечётных элементов, используя механизм ссылок.*/
		int mas[5][5], chet = 0, nechet = 0, srar = 0, size = 5;
		mas2(mas, &size,chet,nechet,srar);
	}
	break;
	case 6:
	{
		//22.	Создать функцию, позволяющую добавлять блок элементов в конец массива.
		char str[13] = "Hello";
		plusend(str);

	}
	break;
	case 7 :
	{
		//23.	Создать функцию, позволяющую вставлять блок элементов, начиная с произвольного индекса массива.
		int arr[20];
		vstavka(arr, 20);

	}
	break;
	case 8:
	{
		//24.	Создать функцию, позволяющую удалять блок элементов, начиная с произвольного индекса массива.
		int arr[20];
		deletearr(arr, 20);
	}
	break;
	case 9:
	{
		//25.	Написать рекурсивную функцию, которая вычисляет сумму всех чисел в диапазоне от a до b.Пользователь вводит a и  b.Проил - люстрируйте работу функции примером.
		int begin, end;
		do
		{
			cout << "eta programma schitaet summu chisel v diapozone\n";
			cout << "\nVvedite nachalo diapozona:";
			cin >> begin;
			cout << "\nVvedite konec diapozona:";
			cin >> end;
			cout << "Suuma ot " << begin << " do " << end << " = " << summ(begin, end) << "\n";
			cout << "Esli hotite prodoljit', najmite 1";
			cin >> begin;
		} while (begin == 1);
	}
	break;
   
	}
	 system("pause");
}
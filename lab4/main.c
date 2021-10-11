#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include "head.h"

void menu(int task_count)
{
	int i = 1;
	while (i <= task_count)
	{
		printf("%d. Задание %d\n", i, i);
		++i;
	}
	printf("%d. Выход \n", i);
}


int main()
{
	double x, result;
	_Bool close_flag = true;
	int arr[N];
	int c;
	setlocale(LC_ALL, "Rus");


	while (close_flag)
	{
		menu(2);
		scanf_s("%d", &c);
		switch (c)
		{
		case 1:
			printf("Введите x = ");
			scanf_s("%lf", &x);
			f(&x, &result);
			printf("f = %lf \n", result);
			break;
		case 2:
			sortStackArray(arr, N);
			break;
		case 3:
			close_flag = false;
			break;
		}

	}
}
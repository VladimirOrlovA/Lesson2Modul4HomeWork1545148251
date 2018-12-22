#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

// Lesson2Modul4HomeWork1545148251


void Task1()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask1\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int a = 10, b = 20, i = 0, count=0;

	printf("\n Условие A<B \n");
	
	do
	{
		printf("\n Введите число A => ");
		scanf_s("%d", &a);

		printf("\n Введите число B => ");
		scanf_s("%d", &b);

		printf("\n");

		if (a >= b)
		{
			SetConsoleTextAttribute(hConsole, 12);						// 12 — светло - красный
			printf("\n Неверный ввод. Пожалуйста, повторите...\n");
			SetConsoleTextAttribute(hConsole, 7);						// 7 белый цвет
		}

	} while (a >= b);


	for (i=b-1; i > a; i--)
	{
		count++;
		printf(" %d число : %d \n", count, i);
	}

	printf("\n Кол-во чисел  : %d \n\n", count);

}


void Task2()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask2\n\n");
	printf("\nВ разработке.... массивы\n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task3()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask3\n\n");
	printf("\nВ разработке.... массивы\n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task4()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask4\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int a = 10, i, count = 0;

	int n = 50 + rand() % 40;

	printf("\n Натуральные числа от 10 до N \n\n");
	printf("\n Случайное число N => %d", n);
	
	printf("\n Нечетные числа от 10 до N кратные числу 5 : \n\n");

	for (i=a; i <= n; i++)
	{
		if (i % 5 == 0 && i%2 != 0)
		{
			count++;
			printf(" %d	- число : %d \n",count, i);
		}
	}

	printf("\n Всего таких чисел %d \n\n", count);
}


void Task5()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask5\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int a = 11, b, count = 0;

	for (a; a <= 99; a++)
	{
		if (a % 11 == 0)
		{
			count++;
			b = pow(a, 2);
			printf(" %d	-	%d^2 = %d \n", count, a, b);
		}
	}
}


void Task6()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask6\n\n");
	printf("\nВ разработке.... массивы \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task7()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask7\n\n");
	printf("\nВ разработке.... массивы \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task8()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask8\n\n");
	printf("\nВ разработке.... массивы \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task9()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\nВ разработке.... массивы \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	
	int number, flag;

	do
	{
		printf("Enter number of Task (1) to (9) => ");
		scanf_s("%d", &number);

		switch (number)
		{
		case 1: {Task1(); } break;
		case 2: {Task2(); } break;
		case 3: {Task3(); } break;
		case 4: {Task4(); } break;
		case 5: {Task5(); } break;
		case 6: {Task6(); } break;
		case 7: {Task7(); } break;
		case 8: {Task8(); } break;
		case 9: {Task9(); } break;
		
		default: printf("\nEntered number of Task does not exist...\n\n");
			
		}

		SetConsoleTextAttribute(hConsole, 10);
		printf("\n--------------------------------------------------------------------------\n\n"); ("\n");
		SetConsoleTextAttribute(hConsole, 7);
		
		printf("Do you want to continue? 1/0 => ");
		scanf_s("%d", &flag);
			

	} while (flag == 1);
	   
	if (flag == 1)	system("pause");
	
}
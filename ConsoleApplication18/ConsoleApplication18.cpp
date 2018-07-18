// ConsoleApplication18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");

	int n;

	do
	{
		cout << "n = ";
		cin >> n;
		cout << endl;

		if(n == 1){
			cout << "Написать программу, которая заполняет массив случайными числами и меняет порядок элементов в каждом столбце на обратный (массив до и после показать на экран).\n\n";

			int a[4][5];

			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					a[i][j] = 1 + rand() % 9;
					cout << setw(5) << a[i][j];
				}
				cout << endl;
			}
			cout << endl;

			for (int j = 0; j < 5; j++)
			{
				for (int i = 0; i < 4 / 2; i++)
				{
					swap(a[i][j], a[3 - i][j]);
				}
			}

			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					cout << setw(5) << a[i][j];
				}
				cout << endl;
			}
			cout << endl;

		}
		else if (n == 2) {
			cout << "Написать программу, которая заполняет массив 5х5 оценками по 12 бальной системе, преобразовать их в оценки по 5 бальной системе. Двойкой считается оценка ниже 4, тройкой – от 4 до 6 и т.д.\n\n";
			
			int a[5][5];

			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					a[i][j] = 1 + rand() % 12;
					cout << setw(5) << a[i][j];
				}
				cout << endl;
			}

			cout << endl;

			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					switch (a[i][j])
					{
					case 1:
					case 2:
					case 3: a[i][j] = 2;
						break;
					case 4:
					case 5:
					case 6: a[i][j] = 3;
						break;
					case 7:
					case 8:
					case 9: a[i][j] = 4;
						break;
					case 10:
					case 11:
					case 12: a[i][j] = 5;
						break;
					}
					cout << setw(5) << a[i][j];
				}
				cout << endl;
			}
			cout << endl;

		}
		else if (n == 3) {

			cout << "Заполнить двухмерный массив 8х8 значениями 0 и 1 случайным образом, но так, чтобы нулей было в два раза больше, чем единичек\n\n";

			int a[8][8];
			int x = 0, y = 2;
			int count1 = 0, count2 = 0;

			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (count2 == 8 * 8 * 1 / 3)
					{
						x = 0;
						y = 1;
					}
					else if (count1 == 8 * 8 * 2 / 3) {
						x = 1;
						y = 1;
					}

					a[i][j] = x + rand() % y;
					cout << setw(5) << a[i][j];

					(a[i][j] == 0) ? count1++ : count2++;

				}
				cout << endl;
			}
			cout << endl;
		}
	} while (true);
    return 0;
}


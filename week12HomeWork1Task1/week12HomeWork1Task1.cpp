/*
Задание 1. Написать функцию, которая принимает две даты
(т.е. функция принимает шесть параметров) и вычисляет
разность в днях между этими датами. Для решения этой
задачи необходимо также написать функцию, которая
определяет, является ли год високосным
*/
#include <iostream>
#include <time.h>
using namespace std;

int RaznostDat(int d1, int d2, int m1, int m2, int y1, int y2) {

	int y, m, e, d, a, b, c, res = 0;
	a = y2 - y1;
	b = a / 4 | a / 400;
	c = a - b;
	d = b * 366 + c * 365;
	d -= (y2 % 4) ? 1 : 0;
	d += 1;
	for (e = 1; e < m1; e++) {
		if (e == 2) {
			d -= (y2 % 4) ? 28 : 29;
		}
		else if (e == 4 || e == 6 || e == 9 || e == 11) {
			d -= 30;
		}
		else {
			d -= 31;
		}
	}
	if (m1 != 12 && a == 1) {
		return d1 + d;
	}
	else {
		return d - d1;
	}
}
int main()
{
	int d1 = 1, d2 = 1, m1 = 1, m2 = 1, y1 = 1990, y2 = 2020;
	//10957 дней Лет 20, месяцев 0, дней 0  (1.1.2020-1.1.1990) https://planetcalc.ru/274/

	cout << "Vvedite perviy den` ";
	cin >> d1;
	cout << "Vvedite perviy mesiyac ";
	cin >> m1;
	cout << "Vvedite perviy god: ";
	cin >> y1;
	cout << "Vvedite vtoroy den`: ";
	cin >> d2;
	cout << "Vvedite vtoroy mesiyac: ";
	cin >> m2;
	cout << "Vvedite vtoroy god: ";
	cin >> y2;
	cout << "Raznost` dney mejdy etimi datami sostavliaet = " << RaznostDat(d1, d2, m1, m2, y1, y2) << " dney\n";
	system("PAUSE");
}
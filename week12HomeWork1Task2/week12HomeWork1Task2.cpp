// week12HomeWork1Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*
Задание 2. Написать функцию, определяющую среднее
арифметическое элементов передаваемого ей массива.
*/

////////
/*
Написать шаблон функции для поиска среднего ариф-
метического значений массива.
*/
#include <iostream>
using namespace std;

template <typename sr>
sr srednee(sr arr[], double size) //sr вначале для того чтобы автоматически определял тип данных
{
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum / size;
}
void main()
{
    const int size = 6;
    double arr[size] = { 1,2,3,4,5,6 };

    cout << "Srednee " << srednee(arr, size) << endl;

}
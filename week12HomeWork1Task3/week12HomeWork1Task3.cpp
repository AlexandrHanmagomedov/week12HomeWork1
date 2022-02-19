// week12HomeWork1Task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

/*
Задание 3. Написать функцию, определяющую количество
положительных, отрицательных и нулевых элементов
передаваемого ей массива.
*/
#include <iostream>
using namespace std;
int rezPlus = 0, rezMinus = 0, rezNull = 0;
template <typename PM0>
PM0 PlusMinusNull(PM0 arr[], int size)
{
    //int rezPlus=0,rezMinus=0,rezNull=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0) { 
            rezMinus++; }
        else if (arr[i] > 0) { 
            rezPlus++; }
        else { 
            rezNull++; }
    }
   
    return 0;
}

int main()
{
    const int size = 6;

    int arr[size] = { -1,2,3,4,5,0 };
    //Нахождения максимального значения в одномерном массиве;
    PlusMinusNull(arr, size);
    cout << "Polozhit elementov  = " << rezPlus << endl;
    cout << "Otricat elementov  = " << rezMinus << endl;
    cout << "Nulevih elementov = " << rezMinus << endl;
    
}

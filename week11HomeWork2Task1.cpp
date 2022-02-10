/*
* Неделя 11
* Тема: Функции. Передача массивов внутрь функции Домашнее задание 2
Задание 1. Написать функцию, реализующую алгоритм
линейного поиска заданного ключа в одномерном массиве.
*/
#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int LinearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}
int main()
{
    srand(time(0));
    int key, ind;
    const int size = 20;
    int arr[size];
    cout << "\nMassiv \n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
        cout << "  ";
        cout << arr[i];
        if (i == 9) {
            cout << endl;
        }
    }
    cout << "\n\nVvedite klu4 poiska:";
    cin >> key;
    ind = LinearSearch(arr, size, key);
    if (ind != -1) {
        cout << "\nKlu4 " << key << " nahoditsia v ya4eike " << ind << endl;// или key+1
    }
    else {
        cout << "\nNet takogo ";
    }
}
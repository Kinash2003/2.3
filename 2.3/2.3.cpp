#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h> 
#include "LongLong.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    LongLong A, B,s;
    cout << " Введіть перші числа:" << endl;
    cin >> A;
    cout << " Введіть дрігі числа:" << endl;
    cin >> B;
    cout << endl;
    cout << " Результат:"<< endl;
    cout << " Перші числа:" << endl;
    cout << A;
    cout << " Дрігі числа:" << endl;
    cout << B;
    cout << " Додавання = " << A + B << endl;
    cout << " Mноження = " << A * B << endl;
    cout << " Порівняння старших: " << endl;
    cout << " \n "; s.Compare(A, B);
    cout << "Порівняння молодших: " << endl;
    cout << " \n "; s.Compare1(A, B);
    cout << "A++" << endl; cout << A++ << endl;
    cout << "A--" << endl; cout << A-- << endl;
    cout << "++A" << endl; cout << ++A << endl;
    cout << "--A" << endl; cout << --A << endl;
   return 0;
}
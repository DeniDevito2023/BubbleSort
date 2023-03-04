
#include <iostream>
#include "Conteiner.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    // проверка на создание отрицательного массива
    IntArray array2(-3);
   
    // создание массива из 5 элементов
    IntArray array(5);

    // заполнение массива случайными числами
    for (int i{ 0 }; i < 5; ++i) {
    array[i] = i + 1;
    }

   /* array.resize(8);
    array.insertBefore(20, 5);
    array.remove(3);
    array.insertAtEnd(30);
    array.insertAtBeginning(40);*/

    // вывод массива на консоль
    for (int i{ 0 }; i < array.getLength(); ++i) {
        std::cout << array[i] << ' ';
    }
         std::cout << '\n';

    cout << array[3] << endl;
   

         return 0;
}

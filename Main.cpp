
#include <iostream>
#include "Conteiner.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    // �������� �� �������� �������������� �������
    IntArray array2(-3);
   
    // �������� ������� �� 5 ���������
    IntArray array(5);

    // ���������� ������� ���������� �������
    for (int i{ 0 }; i < 5; ++i) {
    array[i] = i + 1;
    }

   /* array.resize(8);
    array.insertBefore(20, 5);
    array.remove(3);
    array.insertAtEnd(30);
    array.insertAtBeginning(40);*/

    // ����� ������� �� �������
    for (int i{ 0 }; i < array.getLength(); ++i) {
        std::cout << array[i] << ' ';
    }
         std::cout << '\n';

    cout << array[3] << endl;
   

         return 0;
}

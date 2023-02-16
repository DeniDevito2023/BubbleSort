#include <cstring>
#include <iostream>


using namespace std;

int main()
{
    const int size = 10;
    int array[size] = { 3, 1, 4, 5, 2, 10, 9, 7, 6, 8 };

    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < 9; j++) {
                if (array[j] > array[j + 1]) {
                    int x = array[j]; // создали дополнительную переменную
                    array[j] = array[j + 1]; // меняем местами
                    array[j + 1] = x; // значения элементов
                }
            }
    }
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
 
    return 0;
}
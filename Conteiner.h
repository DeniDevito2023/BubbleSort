#pragma once
# include <cassert> // для assert()
# include <assert.h>
# ifndef INTARRAY_H
//# define INTARRAY_H
//# define PROVERCA_MASSIVA index >= 0 && index < m_length // заменим код на проверку массива на отрицательное значение и выход его за пределы массива


// assert означает, что какое - то условие в этом месте обязательно верно, и если это не так,
// то дальнейшее выполнение программы невозможно

class IntArray {
private:
	int m_length{};
	int* m_data{};

public:
	IntArray(); // конструктор пустого массива

	// конструктор с заданным размером
	IntArray(int lenght);

		// конструктор копирования
		IntArray(const IntArray & a);
		// деструктор на удаление массива
		~IntArray();

		void erase();
		int& operator[] (int index);
		int getLength() const;
		void realocate(int newLength);
		void resize(int newLength);
		// перегрузка оператора (нахрена она я так и не понял)
		IntArray& operator=(const IntArray & a);
		// вставка в массив
		void insertBefore(int value, int index);
		// удаление элемента из массива
		void remove(int index);

		void insertAtBeginning(int value);
		void insertAtEnd(int value);


};


#endif // !INTARRAY_H

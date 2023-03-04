#pragma once
# include <cassert> // ��� assert()
# include <assert.h>
# ifndef INTARRAY_H
//# define INTARRAY_H
//# define PROVERCA_MASSIVA index >= 0 && index < m_length // ������� ��� �� �������� ������� �� ������������� �������� � ����� ��� �� ������� �������


// assert ��������, ��� ����� - �� ������� � ���� ����� ����������� �����, � ���� ��� �� ���,
// �� ���������� ���������� ��������� ����������

class IntArray {
private:
	int m_length{};
	int* m_data{};

public:
	IntArray(); // ����������� ������� �������

	// ����������� � �������� ��������
	IntArray(int lenght);

		// ����������� �����������
		IntArray(const IntArray & a);
		// ���������� �� �������� �������
		~IntArray();

		void erase();
		int& operator[] (int index);
		int getLength() const;
		void realocate(int newLength);
		void resize(int newLength);
		// ���������� ��������� (������� ��� � ��� � �� �����)
		IntArray& operator=(const IntArray & a);
		// ������� � ������
		void insertBefore(int value, int index);
		// �������� �������� �� �������
		void remove(int index);

		void insertAtBeginning(int value);
		void insertAtEnd(int value);


};


#endif // !INTARRAY_H

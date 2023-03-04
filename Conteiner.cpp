
# include "Conteiner.h"
# include <cassert> // ��� assert()
# include <assert.h>
# ifndef INTARRAY_H
# define INTARRAY_H
# define PROVERCA_MASSIVA index >= 0 && index < m_length // ������� ��� �� �������� ������� �� ������������� �������� � ����� ��� �� ������� �������


// assert ��������, ��� ����� - �� ������� � ���� ����� ����������� �����, � ���� ��� �� ���,
// �� ���������� ���������� ��������� ����������
	
	IntArray::IntArray() = default;

	// ����������� � �������� ��������
	IntArray::IntArray(int lenght) : m_length(lenght) {
		assert(lenght >= 0 && "����� ������� �� ������ ���� �������������"); // ����� ������ �� ������� 
		if (lenght > 0) {
			m_data = new int[lenght] {};
		}
	}

	// ����������� �����������
	IntArray::IntArray(const IntArray& a) {
		realocate(a.getLength());
		for (int index{ 0 }; index < m_length; ++index) {
			m_data[index] = a.m_data[index];
		}
	}
	// ���������� �� �������� �������
	IntArray::~IntArray() {
		delete[] m_data;
	}

	void IntArray::erase() {
		delete[] m_data;
		m_data = nullptr;
		m_length = 0;
	}
	int& IntArray::operator[] (int index) {
		assert(PROVERCA_MASSIVA);
		return m_data[index];
	};
	int IntArray::getLength() const {
		return m_length;
	}
	void IntArray::realocate(int newLength) {
		erase();
		if (newLength <= 0) {
			return;
		}
		m_data = new int[newLength];
		m_length = newLength;
	}

	void IntArray::resize(int newLength) {
		if (newLength == m_length) {
			return;
		}
		if (newLength <= 0) {

			erase();
			return;

		}
		int* data{ new int[newLength] };

		if (m_length > 0) {
			int elementsToCopy{ (newLength > m_length ? m_length : newLength) };
			for (int index{ 0 }; index < elementsToCopy; ++index) {
				data[index] = m_data[index];
			}
		}
		delete[] m_data;
		m_data = data;
		m_length = newLength;
	}
	// ���������� ��������� (������� ��� � ��� � �� �����)
	IntArray& IntArray::operator=(const IntArray& a) {
		if (&a == this) {
			return *this;
		};

		realocate(a.getLength());

		for (int index{ 0 }; index < m_length; ++index) {
			m_data[index] = a.m_data[index];
		}
		return *this;
	}
	// ������� � ������
	void IntArray::insertBefore(int value, int index) {

		assert(PROVERCA_MASSIVA);

		int* data{ new int[m_length + 1] };

		for (int before{ 0 }; before < index; ++before) {
			data[before] = m_data[before];
		}
		data[index - 1] = value;

		for (int after{ index }; after < m_length; ++after) {
			data[after + 1] = m_data[after];
		}

		delete[] m_data;
		m_data = data;
		++m_length;
	}
	// �������� �������� �� �������
	void IntArray::remove(int index) {

		assert(PROVERCA_MASSIVA);

		if (m_length == 1) {
			erase();
			return;
		}

		int* data{ new int[m_length - 1] };

		for (int before{ 0 }; before < index; ++before) {
			data[before - 1] = m_data[before];
		}

		for (int after{ index + 1 }; after < m_length; ++after) {
			data[after - 1] = m_data[after];
		}

		delete[] m_data;
		m_data = data;
		--m_length;
	}

	void IntArray::insertAtBeginning(int value) { insertBefore(value, 0); };
	void IntArray::insertAtEnd(int value) { insertBefore(value, m_length); };



#endif // !INTARRAY_H
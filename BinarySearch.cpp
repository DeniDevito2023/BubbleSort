
// ����� ��������� ������ � �������������� �����

//int BinarySearch(int array[], int searchedValue, int left, int right) {
//	// ���� �� ������� ������� �������
//	while (left <= right) {
//		// ������ �������� ��������
//		int middle = (left + right) / 2;
//
//		if (searchedValue == array[middle]) {
//			return middle;
//
//		}
//		else if (searchedValue < array[middle]) {
//			// ������ ������� ���� ������� � ������ �������
//			right = middle - 1;
//		}
//		else {
//			// ������ ������� ���� ������� � ����� �������
//			left = middle + 1;
//		}
//	}
//	// ������ �� �����
//	return -1;
//}
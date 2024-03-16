#include <iostream>

int number = 10;
int data[10] = { 1, 5, 10, 8, 7, 6, 4, 3, 2, 9 }; // �������� �����ϱ�

void quickSort(int* data, int start, int end) {

	if (start >= end) {// ���� 1���� ���

		return;
	}

	// �ǹ� ��
	int key = start;

	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j) {// ������ ������ �ݺ� (�������� ���� ���¿����� ����ؼ� i�� ����, j�� ���ҽ�Ű�� Ű ���� ��ü)
		/*if (data[i] > data[key] && data[j] < data[key]) {
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
			i++;
			j--;
		}*/

		while (data[i] <= data[key]) {// Ű ������ ū ���� ���� ������ �ε��� i���� ������Ű�� ó���� �ݺ�
			i++;
		}
		while (data[j] >= data[key] && j > start) {// Ű ������ ���� ���� ���� ������ �ε��� j���� ���ҽ�Ű�� ó���� �ݺ�, �� �ǹ� ���� �ε������ٴ� ū ������ ��.
			j--;

		}

		if (i > j) {// ���� ������ ���¸� Ű ���� ��ü
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;

		}
		else {
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}

	}

	
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

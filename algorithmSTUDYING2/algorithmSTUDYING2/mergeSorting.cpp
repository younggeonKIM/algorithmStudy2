#include <iostream>

int number = 8;
int sorted[8] = { 7,6,5,8,3,5,9,1 }; // �������� �����ϱ�

void merge(int a[], int m, int middle, int n) {
	int i = m;
	int j = middle + 1;
	int k = m;

	// ���� ������� �迭�� ����
	while (i <= middle && j <= n) {
		if (a[i] <= a[j]) {
			sorted[k] = a[i];
			i++;
		}
		else {
			sorted[k] = a[j];
			j++;
		}
		k++;
	}
	// ���� �κ� �迭�� ����
	if (j > n) {
		for (int t = i; t <= middle; t++) {
			sorted[k] = a[t];
			k++;
		}
	} 
	else {
		for (int t = j; t <= n; t++) {
			sorted[k] = a[t];
			k++;
		}
	}
	// ���ĵ� �ӽ� �迭�� ���� �迭�� ����
	for (int t = m; t <= n; t++) {
		a[t] = sorted[t];
	}
}

void mergeSort(int a[], int m, int n) {
	// ũ�Ⱑ 1���� ū ���
	if (m < n) {
		int middle = (m + n) / 2;
		mergeSort(a, m, middle);
		mergeSort(a, middle + 1, n);
		// ���� ��Ȯ�� ������ �����ϰ� ���߿� ��ħ
		merge(a, m, middle, n);
	}
}
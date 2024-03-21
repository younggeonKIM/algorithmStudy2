#include <iostream>

int number = 8;
int sorted[8] = { 7,6,5,8,3,5,9,1 }; // 오름차순 정렬하기

void merge(int a[], int m, int middle, int n) {
	int i = m;
	int j = middle + 1;
	int k = m;

	// 작은 순서대로 배열에 삽입
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
	// 남은 부분 배열에 삽입
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
	// 정렬된 임시 배열을 실제 배열에 삽입
	for (int t = m; t <= n; t++) {
		a[t] = sorted[t];
	}
}

void mergeSort(int a[], int m, int n) {
	// 크기가 1보다 큰 경우
	if (m < n) {
		int middle = (m + n) / 2;
		mergeSort(a, m, middle);
		mergeSort(a, middle + 1, n);
		// 먼저 정확히 반으로 분할하고 나중에 합침
		merge(a, m, middle, n);
	}
}
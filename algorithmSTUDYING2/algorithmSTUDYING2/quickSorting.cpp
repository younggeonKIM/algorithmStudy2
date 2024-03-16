#include <iostream>

int number = 10;
int data[10] = { 1, 5, 10, 8, 7, 6, 4, 3, 2, 9 }; // 오름차순 정렬하기

void quickSort(int* data, int start, int end) {

	if (start >= end) {// 원소 1개인 경우

		return;
	}

	// 피벗 값
	int key = start;

	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j) {// 엇갈릴 때까지 반복 (엇갈리지 않은 상태에서는 계속해서 i를 증가, j를 감소시키고 키 값과 교체)
		/*if (data[i] > data[key] && data[j] < data[key]) {
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
			i++;
			j--;
		}*/

		while (data[i] <= data[key]) {// 키 값보다 큰 값을 만날 때까지 인덱스 i값을 증가시키는 처리를 반복
			i++;
		}
		while (data[j] >= data[key] && j > start) {// 키 값보다 작은 값을 만날 때까지 인덱스 j값을 감소시키는 처리를 반복, 단 피벗 값의 인덱스보다는 큰 수여야 함.
			j--;

		}

		if (i > j) {// 현재 엇갈린 상태면 키 값과 교체
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

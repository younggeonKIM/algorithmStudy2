#include <stdio.h>
int number;
int data[1000001];
void baek2Sort(int* data, int start, int end) {
	if (start >= end) {
		return;
	}
	int i, j, pivot,temp;
	pivot = start;
	
	
	i = start + 1;
	j = end;
	while (i <= j) {
		while (data[i] <= data[pivot]) {
			i++;
		}
		while (data[j] >= data[pivot] && j > pivot) {
			j--;
		}
		if (i > j) {
			temp = data[pivot];
			data[pivot] = data[j];
			data[j] = temp;
		}
		else {
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	
	baek2Sort(data, start, j-1);
	baek2Sort(data, j + 1, end);
	
}
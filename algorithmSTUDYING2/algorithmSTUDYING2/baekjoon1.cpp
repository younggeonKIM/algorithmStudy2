#include <stdio.h>
int arr[1001];
int basicSorting()
{
    int number, i, j, min, index, temp;
    scanf("%d", &number);
    for (i = 0; i < number; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < number; i++) {
        min = 1001;
        for (j = i; j < number; j++) {
            if (min > arr[j]) {
                min = arr[j];
                index = j;
            }
        }
        temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }
    for (i = 0; i < number; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
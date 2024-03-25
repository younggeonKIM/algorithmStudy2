#include <stdio.h>
int arr[3];
int baekSort()
{
    int i, j, temp;
    for (i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
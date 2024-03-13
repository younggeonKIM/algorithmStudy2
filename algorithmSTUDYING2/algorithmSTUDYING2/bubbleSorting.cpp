#include <iostream>
int bubSorting()
{
    int array2[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
    int i, j, temp;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (array2[j] > array2[j + 1]) {
                temp = array2[j];
                array2[j] = array2[j + 1];
                array2[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", array2[i]);
    }
    return 0;
}
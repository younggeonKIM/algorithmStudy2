#include <iostream>
int insSorting()
{
    int array3[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
    int i, j, temp;
    for (i = 0; i < 9; i++) {
        j = i;
        while (array3[j] > array3[j + 1]) {
            temp = array3[j];
            array3[j] = array3[j + 1];
            array3[j + 1] = temp;
            j--;
        }
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", array3[i]);
    }
    
    return 0;
}
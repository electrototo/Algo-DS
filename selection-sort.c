/*
 * Author: Cristobal L.
 * Description: Example of selection sort.
*/

#include <stdio.h>
#define LENGTH 13

void swap(int *, int*);
void selection_sort(int *, int);

int main() {
    int numbers[LENGTH] = {7, 4, 9, 33, 20, 19, 62, 1, 54, 0, 4, -1, -2};

    printf("Array init:\n");
    for (int i = 0; i < LENGTH; i++)
        printf("%d%s", numbers[i], (i == LENGTH - 1) ? "\n" : ", ");

    selection_sort(numbers, LENGTH);
    printf("\nAfter calling insertion_sort():\n");
    for (int i = 0; i < LENGTH; i++)
        printf("%d%s", numbers[i], (i == LENGTH - 1) ? "\n" : ", ");

    return 0;
}

void selection_sort(int *array, int len) {
    int min_index, key, min;

    for (int i = 0; i < len - 1; i++) {
        key = min = array[i];

        for (int j = i + 1; j < len; j++) {
            if (array[j] < key && array[j] < min) {
                min = array[j];
                min_index = j;
            }
        }

        swap(&array[min_index], &array[i]);
    }
}

void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

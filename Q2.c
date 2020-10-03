/*
-------------------------------------
File:   Q2.c
Project: pint7880_Quiz2
-------------------------------------
Author:  Melissa Pinto
ID:      190647880
Email:   pint7880@mylaurier.ca
Version  2020/09/26
-------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>

int * arrayMin(int * array, int n) {
    int min = 0;
    
    if (array == NULL || n == 0){  //if array and n are equal to 0
        array = NULL; 
        min =0;
    }
    else{ 
        int current;
        current = *array; // current is array pointer
        for (int i = 0; i<n; i++){ //iterate n number of times
            if (current > (*(array+i))){ // if current pointer value is greater than next pointer value
                current = *(array+i); // make pointer equal to next pointer value
                min = i; // smallest element found at current number of iterations

            }
        }

    }
    
    return array + min;
}

void doTest(int * array, int n) {
    printf("arrayMin(");
    if (array == NULL) {
        printf("NULL");
    }
    else {
        printf("{");
        for (int i =0; i < n; i++) {
            printf("%d", array[i]);
            if (i < n -1) {
                printf(", ");
            }
        }
        printf("}");
    }
    printf(", %d) is \n", n);
    int * p = arrayMin(array, n);
    if (p == NULL) {
        printf("NULL\n");
    }
    else {
        printf("%d\n", *p);
    }
}

int main(void) {
    int array1[] = { 77, 33, 19, 99, 42, 6, 27, 4};
    int array2[] = { -3, -42, -99, -1000, -999, -88, -77};
    int array3[] = { 425, 59, -3, 77, 0, 36};

    doTest (array1, 8);
    doTest (array2, 7);
    doTest (array3, 6);
    doTest (NULL, 0);
    doTest (array1, 0);

    return EXIT_SUCCESS;
}

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/*
This function generates random n integers to be sorted.
A corresponds to the array and n is the array size. 
Source: https://stackoverflow.com/questions/822323/how-to-generate-a-random-int-in-c
*/

#define DATA_MAX_INT 100

void GenerateData(int A[], int n) {
    int i;

    srand(time(NULL));
    for (i = 0; i < n; i++)
        A[i] = rand() % (DATA_MAX_INT + 1); 
}
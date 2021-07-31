#include <stdio.h>
#include "GenerateData.c"
// #include "bubbleSort.c"
// #include "insertionSort.c"
// #include "selectionSort.c"
// #include "mergeSort.c"
// #include "quickSort.c"
// #include "countingSort.c"
int main()
{
    int size = 10; // do size*10 after every loop
    int array[size];
    GenerateData(array, size);
    return 0;
}

#include <stdio.h>
#include "function5.h"
#define min(i, j) (((i) < (j)) ? (i) : (j))

void mergesort(int *array, int size){
    int width,i,t,j,k,n,iLeft,iRight,iEnd;
    n = size;
    int arr2[n];

    for (width = 1; width < size; width = 2 * width)
    {

        for (t = 0; t < size; t = t + 2 * width)
        {
            i = t,  iLeft= t, j = min(t+width, size),iRight = min(t+width, size),iEnd = min(t+2*width, size);

            for (k = iLeft; k < iEnd; k++) {

            if (i < iRight && (j >= iEnd || array[i] <= array[j])) {
                arr2[k] = array[i];
                i = i + 1;
            } else {
                arr2[k] = array[j];
                j = j + 1;    
            }
            } 
        
        }

    for (i = 0; i < size; i++){
        array[i] = arr2[i];
    }

    }
}

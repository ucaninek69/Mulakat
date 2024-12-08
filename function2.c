#include <stdio.h>
#include <stdint.h>
#include "function2.h"

int swapBit(unsigned int n, unsigned int p1t, unsigned int p2t) {
    int p1 = p1t -1;
    int p2 = p2t -1;
    int i,t,temp;  
    short int d[32];

    for(i=0;n>0;i++) {    
    d[i]=n%2;    
    n=n/2;    
    }

    t =i;
    printf("Before Swap ");
    for (t=t-1; t >= 0; t--)
    {
        printf("%d", d[t]);
    }
    
    if ((p1 > i) || (p1 ==p2) || (p2 > i)) {
        printf("The requested ranges are not suitable for this number.");
        return 0;
    } else {

    temp = d[p1];
    d[p1] = d[p2];
    d[p2] = temp;

    printf("\nAfter Swap ");
    for (i=i-1; i >= 0; i--)
    {
        printf("%d", d[i]);
    }
    
    }


}

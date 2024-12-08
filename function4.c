#include <stdio.h>
#include <stdint.h>
#include "function4.h"

uint32_t rightmostOff(uint32_t target){
    int i,t;  
    short int d[32];

    for(i=0;target>0;i++) {    
    d[i]=target%2;    
    target=target/2;    
    }

    t =i;
    printf("Before the Process ");
    for (t=t-1; t >= 0; t--)
    {
        printf("%d", d[t]);
    }

    d[0] = 0;
    printf("\nAfter the Process ");
    for (i=i-1; i >= 0; i--)
    {
        printf("%d", d[i]);
    }
}

#include <stdio.h>
#include <stdint.h>
#include "function1.h"


uint32_t isBinaryPanlidrome(uint32_t target) {
    int i,t = 0;  
    short int d[32];

    for(i=0;target>0;i++) {    
    d[i]=target%2;    
    target=target/2;    
    }  

    while(1) {
    if (d[i-1] == d[t]) {
        if (i == t || t > i) {
          printf("TRUE");
          return 1;
        }
        i--;
        t++;
    } else {
      printf("FALSE");
      return 0;
    }

    } 
    
}

#include <stdio.h>
#include <stdint.h>
#include "function3.h"

int checkSignDiff(int num1, int num2){
    int s1,s2;

    if (-num1 > num1){
        s1 =1;
    } else {
        s1 =0;
    }
    if (-num2 > num2){
        s2 = 1;
    } else {
        s2 =0;
    }

    if (s1 == s2){
        printf("FALSE");
        return 0;
    } else {
        printf("TRUE");
        return 1;
    }
}

#include <stdio.h>
#include <stdint.h>
#include "function1.h"
#include "function2.h"
#include "function3.h"
#include "function4.h"
#include "function5.h"

    int main(){
        int arr[]={1,10,50,20,45,12,56,42};
        int i,func,var1,var2,var3;

        printf("Please chose the funciton: \n1.Panlidrome Check\n2.Bit Swap\n3.Sign Difference Check\n4.Unset Righmost Bit\n5.Merge Sort of an Array\n");
        scanf("%d",&func);


        switch (func)
        {
        case 1:
            printf("Please write the number for checking: ");
            scanf("%d",&var1);
            isBinaryPanlidrome(var1);
            break;
        case 2:
            printf("Please write the number for swaping: ");
            scanf("%d",&var1);
            printf("Please write the first bit location for swaping ");
            scanf("%d",&var2);
            printf("Please write the second bit location for swaping ");
            scanf("%d",&var3);                        
            swapBit(var1,var2,var3);
            break;
        case 3:
            printf("Please write the first number for checking: ");
            scanf("%d",&var1);
            printf("Please write the second number for checking: ");
            scanf("%d",&var2);
            checkSignDiff(var1,var2);
            break;
        case 4:
            printf("Please write the number for the process: ");
            scanf("%d",&var1);
            rightmostOff(var1);
            break;
        case 5:
            printf("Merge Sort will be applied on a default array of numbers in the code which is {1,10,50,20,45,12,56,42} \n");
            mergesort(arr,8);
            printf("Result: ");
            for (i=0; i < 8; i++)
            {
            printf("%d, ", arr[i]);
            }
            break; 

        default:
            printf("Please choose between 1-5");
            break;
        }

        while (getchar() != '\n');
        getchar();
        return 0;

    } 

#include <stdio.h>

int main() {

/*****************************************************************************************************/
    //pre-defined array   
         int array[10] = {1, 2, -3, 4, 5, 6, 467, 88, 9, 10};
         int i = 0;
         int *ptr = &array[0];
         for(i=0;i != 10;i++){
             printf("\n%d", *ptr); 
             *ptr++;
         }

/*****************************************************************************************************/
    
    //user-defined array
 /*   int array[30];
    int i, n;
    printf("Enter the number of elements you wish to enter in the array: ");
    scanf_s("%d", &n);

    for (i = 0;i < n;i++) {
        printf("For Array[%d]: ", i);
        scanf_s("%d", &array[i]);
        printf("\n");
    }

    int *ptr = &array[0];
    for (i = 0; i < n;i++) {
        printf("Array[%d]: %d", i, *ptr);
        printf("\n");
        *ptr++;
    }*/
    
    return 0;
}
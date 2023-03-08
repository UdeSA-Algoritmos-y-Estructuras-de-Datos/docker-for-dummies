#include <stdio.h> 
#include <stdlib.h>

/*
* Reserve memory for 3 ints
*/
int main () {
    int* numbersPointer = (int*) malloc(sizeof(int)*3);

    *numbersPointer = 1;
    *(numbersPointer +1) = 2;
    *(numbersPointer +2) = 2;

    int number1 = *numbersPointer;
    int number2 = *(numbersPointer+1);
    int number3 = *(numbersPointer+2);

    printf("%d, %d, %d \n", number1, number2, number3);

    free(numbersPointer);
    // free(numbersPointer);

    int* nullPointer = NULL;
    if(!nullPointer) printf("Holaa");

    free(nullPointer);
    return 0;
}

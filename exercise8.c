/* Lab0 
 * exercise8.c
 * Created by Mauro J. Pappaterra on 22 of September 2017 */

#include <stdio.h>

/*
int length (int array[]) {
    return sizeof(array)/sizeof(array[0]);
}
 */

int countZeroes (int array [], int length) {
    int zeroes = 0;

    int i;

    for (i = 0; i <= length; i ++){
        if (array[i] == 0) {
            //printf("%d", array[i]);
            zeroes++;
        }
    }

    return zeroes;
}

void printArray (int array [], int length){
    printf("{ ");
    int i;
    for (i = 0; i < length; i ++){
        printf("%d, ", array[i]);
    }
    printf("%d }", array[9]);
}

void tripleElements (int array [], int length) {
    int i;
    for (i = 0; i <= (length); i ++){
        array[i] = array[i] * 3;
    }
}

int main() {

    int int1;
    int int2;
    int int3;
    int int4;
    int int5;
    int int6;
    int int7;
    int int8;
    int int9;
    int int10;

    printf("Input 10 numbers: ");
    scanf("%d", &int1);
    scanf("%d", &int2);
    scanf("%d", &int3);
    scanf("%d", &int4);
    scanf("%d", &int5);
    scanf("%d", &int6);
    scanf("%d", &int7);
    scanf("%d", &int8);
    scanf("%d", &int9);
    scanf("%d", &int10);

    int newArray [10] = {int1,int2,int3,int4,int5,int6,int7,int8,int9,int10};
 // int length = (sizeof(newArray)/ sizeof(newArray[0])) - 1;

    printf("Initial array: ");
    printArray(newArray,9);
    printf("\nNumber of 0's: %d", countZeroes(newArray, 9));
    tripleElements(newArray, 9);
    printf("\nTripled array: ");
    printArray(newArray,9);

    printf("\n");

    return 0;
}
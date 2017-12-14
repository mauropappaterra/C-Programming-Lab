/* Lab0 
 * exercise11.c
 * Created by Mauro J. Pappaterra on 29 of September 2017 */

#include <stdio.h>
#include <stdlib.h>

void printInt (int array[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d  \n", array[i]);
    }
}

void threeColorsSort (int* theArray, int arraySize) {
    int flag = 1;
    int aux;

    while (flag == 1){
        flag = 0;

        int i;
        for (i = 0; i < arraySize - 1; i++) {
            if (theArray[i] > theArray[i + 1]){
                aux = theArray[i + 1];
                theArray[i + 1] = theArray[i];
                theArray[i] = aux;
                flag = 1;
            }
        }
    }
}

int main() {
    int number;
    int aux;

    printf("Number of inputs: ");
    scanf("%d" , &number);

    int intArray [number];

    int i;
    for (i = 0; i < number; i++) {
        printf("Give number %d: ", i);
        scanf("%d", &aux);
        if (aux == 1 || aux == 2 || aux == 3) {
            intArray[i] = aux;
        } else {
            printf("ERROR: Must be a number between 1 and 3!\n");
            i--;
        }
    }

    printInt (intArray, number);

    printf("Input when sorted: \n");
    threeColorsSort(intArray, number);
    printInt(intArray, number);

    free (intArray);

    return 0;
}
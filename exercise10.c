/* Lab0 
 * exercise10.c
 * Created by Mauro J. Pappaterra on 27 of September 2017 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print (char** array, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%s  \n", array[i]);
    }
}

void bubbleSort (char** array, int size) {
    int flag = 1;
    char* aux;

    while (flag == 1){
        flag = 0;
        int i;
        for (i = 0; i < size - 1; i++) {
            if (strcmp (array[i], array[i + 1]) > 0 ){ // strcmp returns a negative number if [i] < [i + 1]
                aux = array[i + 1];
                array[i + 1] = array[i];
                array[i] = aux;
                flag = 1;
            }
        }
    }
}

int main() {

    int number;

    printf("Number of Strings: ");
    scanf("%d" , &number);

    char* stringArray [number];

    int i;
    for (i = 0; i < number; i++) {
        printf("Give a String %d: ", i + 1);
        stringArray[i] = (char*) malloc (100);
        scanf("%s" , stringArray[i]);
    }

    //print(stringArray, number);

    printf("Input when sorted: \n");
    bubbleSort(stringArray, number);
    print(stringArray, number);

    free (stringArray);
    return 0;
}
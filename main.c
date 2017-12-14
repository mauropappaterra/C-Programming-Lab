/*  Lab0
 *  main.c
 *  Created by Mauro J. Pappaterra on 21/09/2017 */

#include <stdio.h>
#include <inttypes.h>

int integer = 10; /* integer type */
char character = '&'; /* char type */

int array[] = {1,2,3,4,5,6,7,8,9,0};
char string[] = "C does not have a type String, uses arrays of chars";

int false = 0; // There are no boolean values on C

int main() {
    int cuatro = 2 + 2;

    printf("Hello, World!\n");
    printf("%d", cuatro);

    int newArray [10] = {0,1,2,3,4,5,6,7,8,9};

    for (int i = 0; i < (sizeof(newArray)/ sizeof(newArray[0])); i ++){
        printf("Hello, World! %d\n", newArray[i]);
    }

    return 0;
}
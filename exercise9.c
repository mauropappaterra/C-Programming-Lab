/* Lab0 
 * exercise9.c
 * Created by Mauro J. Pappaterra on 23 of September 2017 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char append (char** str1, char** str2) {

    int total = strlen(str1) + strlen(str2) + 1;
    char* aux = (char*) malloc (total);
    int i = 0;

    int j;
    for (j = 0; j < strlen(str1); j++) {
        aux [i] = str1 [j];
        i++;
    }

    int w;
    for (w = 0; w < strlen(str2); w++) {
        aux [i] = str1 [w];
        i++;
    }

    //aux[i] = '\0';

    /*while (*str1) {
        aux[i++] = *str1++;
    }

    while (*str2) {
        aux[i++] = *str2++;
    }

    aux[i] = '\0'; */
    return aux;
}


int main() {

    int MAX_SIZE = 100;

    //char x [12] = {'H','e','l','l','o',',',' '};
    //char *y = "world!";

    char *x = (char*) malloc (MAX_SIZE);
    char *y = (char*) malloc (MAX_SIZE);

    printf("Enter first word:");
    scanf("%s", &x);

    printf("Enter second word:");
    scanf("%s", &y);

    printf("Result append: %s", append(x,y));

    return 0;
}
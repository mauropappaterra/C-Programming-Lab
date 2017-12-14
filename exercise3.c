/* Lab0 
 * exercise3.c
 * Created by Mauro J. Pappaterra on 22 of September 2017 */

#include <stdio.h>

void askZero () {
    int integer;

    printf("Give an integer:");
    scanf("%d" , &integer);

    if (integer == 0) {
        printf(" The number you entered equals zero\n");
    } else {
        printf(" The number you entered does not equal zero\n");
    }
}

void largestFloat() {
    float float1;
    float float2;

    printf("Give two floats:");
    scanf("%f" , &float1);
    scanf("%f" , &float2);


    if (float1 > float2) {
        printf(" %f is the largest\n", float1);
    } else {
        printf(" %f is the largest\n", float2);
    }
}

void divideOrMultiply() {
    int integer;

    printf("Give an integer:");
    scanf("%d" , &integer);

    if (integer % 2 == 0) {
        printf(" Result is: %d\n", (integer / 2));
    } else {
        printf(" Result is: %d\n", (integer * 3));
    }
}

void threeEquals() {
    int integer1;
    int integer2;
    int integer3;

    printf("Give three integers:");
    scanf("%d" , &integer1);
    scanf("%d" , &integer2);
    scanf("%d" , &integer3);

    if (integer1 == integer2 || integer2 == integer3 || integer1 == integer3) {
        printf(" Some numbers are equal\n");
    } else {
        printf(" All are unique\n");
    }
}

int main() {

    askZero();
    largestFloat();
    divideOrMultiply();
    threeEquals();

    return 0;
}
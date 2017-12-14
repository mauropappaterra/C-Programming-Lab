/* Lab0 
 * exercise2.c
 * Created by Mauro J. Pappaterra on 22 of September 2017 */

#include <stdio.h>

void scanInt() {
    int integer1;
    int integer2;

    printf("Give two integers: ");
    scanf("%d" , &integer1);
    scanf("%d" , &integer2);
    printf("You entered %d and %d, their sum is: %d\n", integer1, integer2, (integer1 + integer2));
}

void scanFloat() {
    float float1;
    float float2;

    printf("Give two floats: ");
    scanf("%f" , &float1);
    scanf("%f" , &float2);
    printf("You entered %f and %f, their product is: %f\n", float1, float2, (float1 * float2));
}

void scanString() {
    char word[100];

    printf("Give a word: ");
    scanf ("%s", word);

    printf("%s ", word);
    printf("%s\n", word);
}

int main() {

    scanInt();
    scanFloat();
    scanString();

    return 0;
}
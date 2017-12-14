/* Lab0 
 * exercise1.c
 * Created by Mauro J. Pappaterra on 21 of September 2017 */

#include <stdio.h>

void printMessage () {
    printf("One half is %d%%\n" , 50);
    printf("The difference between %d and %d is %d\n", 10, 3, (10-3));
    printf("%f / %f is %f\n", 1.0, 3.0, (1.0 / 3.0));
}

int main() {
    printMessage();
    return 0;
}
/* Lab0 
 * exercise4.c
 * Created by Mauro J. Pappaterra on 22 of September 2017 */

#include <stdio.h>

void printEven40() {
    int print = 0;

    printf("Even numbers between 0 and 40:\n");
     while (print <= 40) {
      if (print % 2 == 0) {
          printf("%d ", print);
      }
      print++;
     }

    printf("\n");
}

void oneTo100() {

    int i;
    int j;

    printf("Numbers 1 to 100:\n");

    for (i = 0; i < 100; i = i + 10) {
        for (j = 0; j <= 9; j++) {
            if (i + j + 1 <= 9 ){
                printf(" %d ", i + j + 1);
            } else {
                printf("%d ", i + j + 1);
            }
        }
        printf("\n");
    }
}

void square() {
    int number;
    int flag = 1;

    while (flag) {
        printf("Give a number:");
        scanf("%d" , &number);

        if (number != 0) {
            printf(" The square of %d is %d\n", number, (number * number));
        } else {
            printf(" You entered zero.\n");
            flag = 0;
        }
    }
}

int main() {

    printEven40();
    oneTo100();
    square();

    return 0;
}
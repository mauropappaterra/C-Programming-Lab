/* Lab0 
 * exercise5.c
 * Created by Mauro J. Pappaterra on 22 of September 2017 */

#include <stdio.h>

void askNumber() {
    int number;
    int flag = 1;
    char play = 'x';

    while (flag) {

        printf("Give a number: ");
        scanf("%d" , &number);

        int i;

        for (i = 0; i < number; i++) {
            printf("%d\n", i + 1);
        }

        while (play != 'y' && play != 'n') {
            printf("Run again (y/n)? ");
            scanf(" %c" , &play);
        }

        if (play == 'y') {
            play = 'x';
        } else {
            printf("Exiting...\n");
            flag = 0;
        }
    }
}

int main() {
    askNumber();
    return 0;
}
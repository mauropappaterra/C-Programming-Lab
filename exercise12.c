/* Lab0 
 * exercise12.c.c
 * Created by Mauro J. Pappaterra on 23 of September 2017 */

#include <stdio.h>

int fibonacci (int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci( n - 1) + fibonacci (n - 2);
    }
}

int main() {

    int n;

    printf("Give n: ");
    scanf("%d" , &n);

    int i;
    for (i = 1; i <= n; i ++) {
        printf("%d\n", fibonacci(i));

    }

    return 0;
}
/* Lab0 
 * exercise7.c
 * Created by Mauro J. Pappaterra on 22 of September 2017 */

#include <stdio.h>

int sum (int a, int b){
    return (a + b);
}

int res (int a, int b){
    return (a - b);
}

int mul (int a, int b){
    return (a * b);
}

int div (int a, int b){
    if (b != 0) {
        return (a / b);
    } else {
        return -1;
    }
}


int main() {

    int a;
    int b;

    printf("Give a: ");
    scanf("%d", &a);

    printf("Give b: ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, sum(a,b));
    printf("%d - %d = %d\n", a, b, res(a,b));
    printf("%d * %d = %d\n", a, b, mul(a,b));
    printf("%d / %d = %d\n", a, b, div(a,b));

    return 0;
}
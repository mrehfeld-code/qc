#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {
    char operator;
    float a, b;

    printf("Please enter your formula below. Use the format: a[+|-|*|/]b (eg.: 2 + 4 -> 2+4).\n-> ");
    scanf("%f%c%f", &a, &operator, &b);

    switch(operator) {
        case '+':
            printf("\n%g + %g = %g\n", a, b, a + b);
            break;
        case '-':
            printf("\n%g - %g = %g\n", a, b, a - b);
            break;
        case '*':
            printf("\n%g * %g = %g\n", a, b, a * b);
            break;
        case '/':
            printf("\n%g / %g = %g\n", a, b, a / b);
            break;

        default:
            printf("\nUnkown operator %c!\n", operator);
    }

    printf("\nCopyright (c) 2023 by mrehfeld-code <m.rehfeld.web@gmx.net>\n");

    return 0;
}

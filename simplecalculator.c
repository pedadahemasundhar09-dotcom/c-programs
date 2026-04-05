#include <stdio.h>

int main() {
    char op;
    double a, b;

    scanf(" %c", &op);
    scanf("%lf %lf", &a, &b);

    switch(op) {
        case '+':
            printf("%.2lf", a + b);
            break;
        case '-':
            printf("%.2lf", a - b);
            break;
        case '*':
            printf("%.2lf", a * b);
            break;
        case '/':
            if (b != 0)
                printf("%.2lf", a / b);
            else
                printf("Error");
            break;
        default:
            printf("Error");
    }

    return 0;
}
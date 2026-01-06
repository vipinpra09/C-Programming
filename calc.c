#include <stdio.h>

int main() {
    char op;       // To store the operator
    int a, b;      // Operands
    float result;  // Result (float for division)

    // 1. Input numbers and operator
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op); // Note the space before %c

    // 2. Perform calculation using switch
    switch(op) {
        case '+':
            result = a + b;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if(b != 0) {
                result = (float)a / b;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        case '%':
            if(b != 0) {
                printf("Result: %d\n", a % b);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
    }

    return 0;
}

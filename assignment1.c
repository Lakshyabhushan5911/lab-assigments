
#include <stdio.h>
int main() {
    char operator;
    double num1, num2, result;
    printf("Enter the operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    do {
        if (operator == '+') {
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
        }
        else if (operator == '-') {
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
        }
        else if (operator == '*') {
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
        }
        else if (operator == '/') {
            if (num2 == 0) {
                printf("Error! Division by zero is not allowed.\n");
            }
            else {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }
        }
        else {
            printf("Error! Invalid operator. Please try again.\n");
        }
        printf("\nDo you want to perform another operation (y/n)? ");
        scanf(" %c", &operator);
    } while (operator == 'y' || operator == 'Y');
    return 0;
}
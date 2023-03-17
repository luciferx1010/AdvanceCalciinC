#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        printf("\n");
        printf("Advanced Calculator\n");
        printf("Created by @th@r^\n");
        printf("--------------------\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Square Root\n");
        printf("7. Logarithm\n");
        printf("8. Exit\n");
        printf("--------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                if (num2 == 0) {
                    printf("Error: Cannot divide by zero.\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                }
                break;
            case 5:
                printf("Enter base number: ");
                scanf("%lf", &num1);
                printf("Enter exponent: ");
                scanf("%lf", &num2);
                result = pow(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
            case 6:
                printf("Enter number: ");
                scanf("%lf", &num1);
                if (num1 < 0) {
                    printf("Error: Cannot calculate square root of negative number.\n");
                } else {
                    result = sqrt(num1);
                    printf("Result: %.2lf\n", result);
                }
                break;
            case 7:
                printf("Enter number: ");
                scanf("%lf", &num1);
                if (num1 <= 0) {
                    printf("Error: Cannot calculate logarithm of non-positive number.\n");
                } else {
                    result = log10(num1);
                    printf("Result: %.2lf\n", result);
                }
                break;
            case 8:
                exit(0);
                break;
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}

#include <stdio.h>

int big3(int, int, int); // Declaration for big3 function
int fact(int);           // Declaration for fact function
int reverse(int);        // Declaration for reverse function

int main() {
    int choice, num1, num2, num3, result;

    do {
        printf("\nMenu:\n");
        printf("1. Find the biggest of 3 numbers\n");
        printf("2. Find the factorial of a number\n");
        printf("3. Reverse a number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter 3 numbers: ");
                scanf("%d %d %d", &num1, &num2, &num3);
                result = big3(num1, num2, num3);
                printf("The biggest number is: %d\n", result);
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d", &num1);
                result = fact(num1);
                printf("The factorial is: %d\n", result);
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &num1);
                result = reverse(num1);
                printf("The reverse of the number is: %d\n", result);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    } while (choice != 4);

    return 0;
}


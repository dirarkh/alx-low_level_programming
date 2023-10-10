#include <stdio.h>
#include <stdlib.h>

// Function to multiply two numbers
int multiply(int num1, int num2) {
    return num1 * num2;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    char *num1_str = argv[1];
    char *num2_str = argv[2];

    // Check if num1 and num2 are composed of digits
    for (int i = 0; num1_str[i] != '\0'; i++) {
        if (!isdigit(num1_str[i])) {
            printf("Error\n");
            return 98;
        }
    }

    for (int i = 0; num2_str[i] != '\0'; i++) {
        if (!isdigit(num2_str[i])) {
            printf("Error\n");
            return 98;
        }
    }

    // Convert num1 and num2 to integers
    int num1 = atoi(num1_str);
    int num2 = atoi(num2_str);

    int result = multiply(num1, num2);

    printf("%d\n", result);

    return 0;
}

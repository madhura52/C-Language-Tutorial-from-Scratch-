#include<stdio.h>  // Header file for input/output functions like printf()
int main()
{
    int a = 10, b = 3;  // Declare two integer variables and assign values
    printf("a=%d,b=%d\n", a, b);  // Display the values of a and b
    printf("Addition:%d\n", a + b);  // Add a and b and print the result (10 + 3 = 13)
    printf("Subtraction:%d\n", a - b);  // Subtract b from a and print the result (10 - 3 = 7)
    printf("Division:%d\n", a / b);  // Integer division: 10 / 3 = 3 (decimal part is discarded)
    printf("Modulus:%d\n", a % b);  // Modulus operator gives the remainder: 10 % 3 = 1
    return 0;  // Indicate successful program execution
}

// Program to explain Identifiers in C
#include<stdio.h>
int main()
{
    // 'age' is an identifier (variable name)
    int age=20;
    // 'marks' is an identifier
    float marks=85.5890;
    // 'grade' is an identifier
    char grade='A';
    // Display the values
    printf("Age = %d\n", age);
    printf("Marks = %.1f\n", marks);
    printf("Grade = %c\n", grade);
    return 0;
}



//Program to explain Literals in C
#include <stdio.h>
int main()
{
    // Integer literal
    int number=100;
    // Floating-point literal
    float price=45.75;
    // Character literal
    char letter='M';
    // String literal
    char name[]="Madhura";
    // Display all literals
    printf("Integer Literal :%d\n", number);
    printf("Float Literal   :%f\n", price);
    printf("Character Literal :%c\n", letter);
    printf("String Literal  :%s\n", name);
    return 0;
}

//assigning value
#include <stdio.h>
int main() 
{
    int a;      // declaration
    a=10;     // assigning value without scanf
    printf("%d", a);
    return 0;
}

  //Stanadrd Input_output function program 
#include<stdio.h>
int main()
{
    float s;
    printf("Enter value of s:");
    scanf("%f",&s);
    printf("Value of s is %f",s);
    return 0;
}
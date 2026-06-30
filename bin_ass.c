// //Bitwise AND
#include<stdio.h>
int main() 
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    int result=a&b;

    printf("Result(a&b)=%d\n",result);
    return 0;
}

// //Bitwise OR
// #include<stdio.h>
// int main() 
// {
//     int a,b;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     int result=a|b;
//     printf("Result (a | b) = %d\n", result);
//     return 0;
// }

// //Bitwise XOR
#include <stdio.h>
int main() 
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    int result=a^b;
    printf("Result(a^b)=%d\n",result);
    return 0;
}

// //Left Shift
#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int result=num<<1;
    printf("Result (num<<1)=%d\n",result);
    return 0;
}

// //Right shift
// #include<stdio.h>
// int main() 
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     int result=num>>1;
//     printf("Result (num>>1)=%d\n",result);
//     return 0;
// }


//Toggle on/off
#include <stdio.h>
int main() {
    int state;
    printf("Enter current state (0 or 1): ");
    scanf("%d", &state);
    state = state ^ 1;
    printf("New state: %d\n", state);
    return 0;
}

//double score
#include <stdio.h>
int main() {
    int score;
    printf("Enter score: ");
    scanf("%d", &score);
    int result = score << 1;
    printf("Doubled score: %d\n", result);
    return 0;
}

//half value(right shift)
// #include <stdio.h>
// int main() {
//     int num;
//     printf("Enter number: ");
//     scanf("%d", &num);
//     int result = num >> 1;
//     printf("Half value: %d\n", result);
//     return 0;
// }


//FInd combined permission using assignment operator.
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two permission values: ");
    scanf("%d %d", &a, &b);
    int result = a | b;
    printf("Combined permission: %d\n", result);
    return 0;
}

//find differnce of number using assignment operator
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int result = a ^ b;

    printf("Difference (XOR): %d\n", result);

    return 0;
}

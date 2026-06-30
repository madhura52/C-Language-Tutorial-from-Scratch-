//bitwise AND operator
#include<stdio.h>
int main()
{
    int A,B;
    A=5;
    B=3;
    printf("A=%d\n",A);
    printf("B=%d\n",B);
    printf("A&B=%d\n",A&B);
    return 0;
}

// //bitwise or operator
#include<stdio.h>
int main()
{
    int A,B;
    A=5;
    B=3;
    printf("A=%d\n",A);
    printf("B=%d\n",B);
    printf("A|B=%d\n",A|B);
    return 0;
}

// //bitwise xor operator
#include<stdio.h>
int main()
{
    int A, B;
    A=5;
    B = 3;
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("A ^ B = %d\n", A ^ B);
    return 0;
}

//bitwise not operator
#include <stdio.h>
int main()
{
    int A;
    A=5;
    printf("A=%d\n",A);
    printf("~A=%d\n",~A);
    return 0;
}

//left shift bit operator
#include <stdio.h>
int main()
{
    int A;
    A=5;
    printf("A=%d\n",A);
    printf("A<<1=%d\n",A<<1);
    return 0;
}

// //right shoft bitwise operator
#include <stdio.h>
int main()
{
    int A;
    A=8;
    printf("A=%d\n",A);
    printf("A>>1=%d\n",A>>1);
    return 0;
}

//complimentory operator
#include<stdio.h>  
int main()  
{  
   int a=8;  // variable declarations  
   printf("The output of the Bitwise complement operator ~a is %d",~a);  
   return 0;  
}

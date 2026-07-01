//postfix
#include <stdio.h>
int main() 
{
    int a=5;
    printf("Before:a=%d\n",a);
    printf("Postfix:%d\n",a++);
    printf("After:a=%d\n",a);
    return 0;
}

//prefix
#include <stdio.h>
int main() {
    int a = 5;
    printf("Before: a = %d\n", a);
    printf("Postfix: %d\n", ++a);
    printf("After: a = %d\n", a);
    return 0;
}

//prefix
#include <stdio.h>
int main() 
{
    int a=5;
    int b=++a;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}

//postfix
#include<stdio.h>
int main()
{
    int a=5;
    int b=a++;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}
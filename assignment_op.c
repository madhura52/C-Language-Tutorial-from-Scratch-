#include <stdio.h>
int main() 
{
    int a=10;
   // Initialize variable 'a' with value 10
    printf("Initial value of a = %d\n",a);
     // Display the initial value of a
    a+=5;   
    printf("After +=:%d\n",a);
     // Subtract 3 from a (a = a - 3)
    a-=3;   
    printf("After -=:%d\n",a);
    // Multiply a by 2 (a = a * 2)
    a*=2;  
    printf("After *=:%d\n",a);
    // Divide a by 4 (Integer division)
    a/=4;   
    printf("After /=:%d\n",a);
   // Store the remainder when a is divided by 3
    a%=3;   
    printf("After %%=:%d\n",a);
    return 0;
}

// //An employee has a salary of ₹5000. Company gives a bonus of ₹1000..Update the salary using assignment operator.
#include <stdio.h>
int main() 
{
      // Initial salary of the employee
    int salary=5000;
    // Add bonus of ₹1000 using += operator
    salary+=1000; 
    // Display updated salary
    printf("Updated Salary =%d",salary);
    return 0;
}

//A product costs ₹2000. A discount of ₹500 is applied.Find the final price.

//₹1000 is equally divided among 4 people.Find share per person using assignment operator.

#include<stdio.h>
int main() 
{
    //Q1.Normal step-by-step evaluation
    int a1=5;
    a1+=10;
    a1*=2;
    a1-=4;
    printf("Q1 Output: a1 =%d\n",a1);

    //Q2. Mixed assignment
    int a2=10, b2 =5;
    a2+=b2*=2;
    printf("Q2 Output:a2 =%d,b2=%d\n",a2,b2);

    //Q3.Nestd assignment
    int x3=4,y3;
    y3=x3+=3;
    printf("Q3 Output: x3 =%d,y3=%d\n",x3,y3);

    //Q4.Division confusion
    int a4=20;
    a4/=3;
    printf("Q4 Output:a4=%d\n",a4);

    //Q5.Modulus with assignment
    int a5=17;
    a5%=5;
    printf("Q5 Output:a5=%d\n",a5);

    //Q6.Operator confusion
    int a6=10;
    a6=+5;
    printf("Q6 Output:a6=%d\n",a6);

    //Q7.Multiple updates in value
    int a7=2;
    a7*=3;
    a7+=4;
    a7/=2;
    printf("Q7 Output:a7=%d\n",a7);

    //Q8.logical thinking
    int a8=5, b8=10;
    a8+=b8-=3;
    printf("Q8 Output:a8=%d,b8=%d\n",a8,b8);

    //Q9.Assignment inside assingment
    int a9=3,b9=4;
    a9*=b9+=2;
    printf("Q9 Output:a9=%d,b9=%d\n",a9,b9);

    //Q10
    int a10=5,b10=2;
    a10+=b10*=a10+=3; //a10=8 ;b10=16;
    printf("Q10 Output:a10=%d,b10=%d\n",a10,b10);

    return 0;
}

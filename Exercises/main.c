//**First program to print hello world
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//    printf("Hello World!");
//    return 0;
//}


//**Sum of two number
/*
#include<stdio.h>

int main()
{
    system("color f0");
    int a,b;
    int sum;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter another number: ");
    scanf("%d",&b);

    printf("-----------------------------------\n");

    sum = a + b;
    printf("Sum of two numbers = %d", sum);
}
*/


//**A simple calculator that can perform addition, subtraction, multiplication, division and modulus
/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("color f0");

    int num1, num2,sum, diff, mul, div, mod;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("----------------------------------\n");

    //For Addition
    sum = num1 + num2;
    printf("Sum = %d\n",sum);

    //For Subtraction
    diff = num1 - num2;
    printf("Difference = %d\n",diff);

    //For Multiplication
    mul = num1 * num2;
    printf("Product = %d\n",mul);

    //For Subtraction
    div = num1 / num2;
    printf("Division = %d\n",div);

    //For Modulus
    mod = num1 % num2;
    printf("Modulus = %d\n",mod);

    return 0;
}
*/


//**simple calculation using switch case

/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("color f0");

    int num1, num2, sum, diff;
    int choice;

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter another number: ");
    scanf("%d",&num2);

    printf("Choose an operation:\n");
    printf("1. Sum\n");
    printf("2. Difference\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);
    printf("-------------------------\n");

    switch(choice)
    {
    case 1:
        sum = num1 + num2;
        printf("Sum = %d\n",sum);
        break;
    case 2:
        diff = num1 - num2;
        printf("Difference = %d\n",diff);
        break;
    default:
        printf("Invalid Input\n");
    }
return 0;
}
*/

                //Practice Questions of C program

/*1. Write a program to calculate perimeter of rectangle.
Take sides, l & b, from the user.*/

/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("color f0");

    float l,b,perm;
    printf("Enter the length of rectangle: ");
    scanf("%f",&l);
    printf("Enter the breadth of rectangle: ");
    scanf("%f",&b);

    //Formula of rectangle of perimeter
    perm = 2*(l + b);
    printf("Perimeter of Rectangle = %.2f", perm);

    return 0;
}
*/


//2. Take a number(n) from user & output its cube(n*n*n).
/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("color f0");

    int n,cube;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    //Formula for finding cube
    cube = n*n*n;
    printf("Cube of given number is %d\n",cube);

    return 0;
}
*/

//3. Write a program to print the average of 3 numbers.
/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("color f0");

    float a,b,c,avg;
    printf("Enter any three numbers: ");
    scanf("%f%f%f",&a,&b,&c);

    //Formula for calculating average
    avg = (a+b+c)/3;
    printf("Average = %.1f\n", avg);

}
*/

//4.Write a program to check if given character is digit or not.

/*
#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a digit
    if (ch >= '0' && ch <= '9') {
        printf("The character '%c' is a digit.\n", ch);
    } else {
        printf("The character '%c' is not a digit.\n", ch);
    }

    return 0;
}

*/



//5.program to find greatest number between two integers

/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("color f0");

    float num1,num2;
    printf("Enter first number: ");
    scanf("%f",&num1);
    printf("Enter second number: ");
    scanf("%f",&num2);

    if(num1>num2){
        printf("Num1 is greater.");
    }

    else{
        printf("Num2 is greater.");
    }
    return 0;
}
*/

//6.Check whether the given number is odd or even

/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("color f0");

    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    if(num%2 == 0)
    {
        printf("%d is even number",num);
    }

    else
    {
        printf("%d is odd number",num);
    }

    return 0;
}
*/

//7.Check whether the given number is one/two or three digit number

/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("color f0");

    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if(a>9 && a<100)
    {
        printf("%d is two digit number",a);
    }

    else if(a>100 && a<1000)
    {
        printf("%d is three digit number",a);
    }

    else
    {
        printf("%d is one digit number",a);
    }
    return 0;
}
*/






















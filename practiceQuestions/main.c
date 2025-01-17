//1.Write a program to print "Hello, World!" on the screen.
/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Hello, World");
    return 0;
}
*/

//2.Create a program that performs addition, subtraction, multiplication, and division of two numbers.
/*
#include<stdio.h>

int main()
{
    int num1, num2, sum, diff, mul, div;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the another number: ");
    scanf("%d",&num2);

    sum = num1+num2;
    diff = num1-num2;
    mul = num1*num2;
    div = num1/num2;

    printf("Sum = %d\n",sum);
    printf("Difference = %d\n",diff);
    printf("Product = %d\n",mul);
    printf("Division = %d\n",div);
    return 0;
}
*/

//3.Write a program to check whether a number is even or odd.


#include<stdio.h>
/*
int main()
{
    int a;
    printf("Enter a number to check odd or even: ");
    scanf("%d",&a);

    if(a%2 == 0 && a>=1 && a<=9){
        printf("%d is even number\n",a);
    }
    else if(a%2 != 0){
        printf("%d is odd number\n",a);
    }
    else{
        printf("Please enter a valid number\n",a);
    }
    return 0;
}
*/

//4.Find the largest among three numbers.
/*
#include<stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter any three numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3){
        printf("num1 is greatest\n");
    }
    else if (num2>num1 && num2>num3){
        printf("num2 is greatest\n");
    }
    else if(num3>num1 && num3>num2){
        printf("num3 is greatest\n");
    }
    else{
        printf("Equal numbers\n");
    }
    return 0;
}
*/

//5.Calculate the sum of the first n natural numbers.

//6.Swap two numbers using a temporary variable and without using a temporary variable.

/*
#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;
    printf("Swapped value: a = %d and b = %d\n",a,b);
    return 0;
}

*/


//swapping nums without using temp variable
/*
#include<stdio.h>

int main()
{
    int a, b;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Swapping without using a temporary variable (addition and subtraction)
    a = a + b; // Step 1: a now becomes the sum of a and b
    b = a - b; // Step 2: b now becomes the original value of a
    a = a - b; // Step 3: a now becomes the original value of b

    printf("After swapping without using a temporary variable (addition/subtraction): a = %d, b = %d\n", a, b);

    return 0;
}

*/






























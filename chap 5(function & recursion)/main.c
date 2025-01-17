                        //Function and Recursion

//Function:
//    Block of codes that performs particular tasks.

/*
#include<stdio.h>

int main()
{
    fruit();
    return 0;
}

void fruit()
{
    printf("1.Banana\n");
    printf("2.Apple\n");
    printf("3.Graves\n");
    printf("4.Orange\n");
    printf("5.Papaya\n");
}
*/

//Q. Write a function to find sum of digits of a number.
/*
#include<stdio.h>

int main()
{
    sum();  //function call
    return 0;
}


void sum() //new function named sum
{
    int num1, num2, sum;
    printf("Enter any two numbers: ");
    scanf("%d%d",&num1,&num2);
    sum = num1+num2;
    printf("Sum = %d\n",sum);
}

*/


//Q.Write a function to find square root of a number.
/*
#include<stdio.h>
#include<math.h>  //to use sqrt for finding square root

int main()
{
    squareRoot();  //function call
    return 0;
}


void squareRoot() //new function named sum
{
    int num;
    float rslt;
    printf("Enter a number: ");
    scanf("%d",&num);
    rslt = sqrt(num);
    printf("Square root = %.2f\n",rslt);
}
*/

//Q.Write a function to print "Hot" or "Cold" depending on the temperature user enters.
/*
#include<stdio.h>

int main()
{
    temp();
    return 0;
}

void temp()
{

    int temperature;
    printf("Enter the temperature in Degree Celsus: ");
    scanf("%d",&temperature);

    if(temperature>=-10 && temperature<=25){
        printf("Cold\n");
    }
    else if(temperature>15 && temperature<=60){
        printf("Hot\n");
    }
    else{
        printf("out of range");
    }

}
*/


//Q.Print Suva Pravat if Nepali and Good Morning if American.

/*
#include<stdio.h>
void nepali();
void foreigner();

int main()
{
    system("color f0");

    char ch;
    printf("Enter n for Nepali and f for Foreigner: ");
    scanf("%c",&ch);

    printf("-------------------------------------\n");

    if(ch == 'n'){
        nepali();
    }
    else if(ch == 'f'){
        foreigner();
    }
    else{
        printf("Hey! there, Greeting from Anit Shrestha..\n");
    }
    return 0;
}

void nepali()
{
    printf("Namaste, Hajur ko din suva rahos..\n");
}

void foreigner()
{
    printf("Hello,Have a good day..\n");
}
*/

//Use library functions to calculate square of a given number
/*
#include<stdio.h>
#include<math.h>

int main()
{
    square();  //function calling also called argument
}

void square()  //parameters
{
    int num,sq;
    printf("Enter a number: ");
    scanf("%d",&num);
    sq = pow(num,2);  //using pow function to calculate square
    printf("Power is %d",sq);
}
*/


//Write a functions to calculate area of rectangle, area of square and area of circle.
/*
#include<stdio.h>
#include<math.h>
#define PI 3.14

int main()
{
    system("color f0");

    rectangle();
    square();
    circle();
    return 0;
}

void rectangle()
{
    int l,b,rect;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d%d",&l,&b);

    rect = l*b;
    printf("Area of length %d and breadth %d rectangle = %d\n\n",l,b,rect);
}

void square()
{
    int l,sqr;
    printf("Enter length of square: ");
    scanf("%d",&l);

    sqr = pow(l,2);
    printf("Area of Square having length %d = %d\n\n",l,sqr);
}

void circle()
{
    int r;
    float cir;
    printf("Enter the radius of circle: ");
    scanf("%d",&r);

    cir = PI*pow(r,2);
    printf("Area of circle having radius %d = %.2f\n\n",r,cir);
}
*/


//Using switch case:

/*
#include<stdio.h>
#include<stdlib.h>
#define PI 3.14

void rectangle();
void square();
void circle();

int main()
{
    system("color f0");
    char ch;
    printf("Enter r for rectangle, s for square and c for circle: ");
    scanf("%c", &ch);
    switch(ch)
    {
    case 'r':
        rectangle();
        break;
    case 's':
        square();
        break;
    case 'c':
        circle();
        break;
    default:
        printf("Invalid Input\n");
        break;
    }
    return 0;
}

void rectangle()
{
    int l,b,rect;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d%d",&l,&b);

    rect = l*b;
    printf("Area of length %d and breadth %d rectangle = %d\n\n",l,b,rect);
}

void square()
{
    int l,sqr;
    printf("Enter length of square: ");
    scanf("%d",&l);

    sqr = l*l;
    printf("Area of Square having length %d = %d\n\n",l,sqr);
}

void circle()
{
    int r;
    float cir;
    printf("Enter the radius of circle: ");
    scanf("%d",&r);

    cir = PI*r*r;
    printf("Area of circle having radius %d = %.2f\n\n",r,cir);
}

*/




//Recursion

//-Function that calls itself

//Q.Sum of first n natural number

/*
#include<stdio.h>

//function declaration
int sum(int n);

int main()
{
    printf("Sum of n number is %d",sum(5));
    return 0;
}

//recursive function
int sum(int n)
{
    if(n == 1){
        return 1;
    }
    int sum1 = sum(n-1);
    int sumN = sum1+n;
    return sumN;

}
*/


//factorial of n natural number
/*
#include<stdio.h>

int fact(int n);

int main()
{
    printf("Factorial is: %d",fact(5));
    return 0;
}

int fact(int n)
{
    if(n == 0){
        return 1;
    }
    int factm1 = fact(n-1);
    int factN = factm1*n;
    return factN;
}

*/


//Convert Celsius to fahrenheit

/*
#include<stdio.h>

int temp(int celcius);

int main()
{
    int feh = temp(0); // Passing 0°C as input
    printf("%d\n", feh); // Output should be 32°F
    return 0;
}

int temp(int celcius)
{
    int feh = (celcius * 9.0 / 5) + 32; // Correct formula
    return feh;
}
*/


//celc to fahr
/*
#include<stdio.h>

// Function to convert Fahrenheit to Celsius
int temp(int fah);

int main()
{
    int fah;
    printf("Enter value of Fahrenheit: ");
    scanf("%d", &fah); // Take Fahrenheit input from user

    int celcius = temp(fah); // Call temp function to convert
    printf("The equivalent Celsius is: %d\n", celcius); // Print result

    return 0;
}

int temp(int fah)
{
    int celcius;
    celcius = (fah - 32) * 5 / 9; // Correct formula for Fahrenheit to Celsius
    return celcius;
}
*/





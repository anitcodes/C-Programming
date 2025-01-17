                        //Chapter 3(Conditional Statements)


/*
1.
i.if else statement

Syntax:
if(condition){
    do something if true;
}

else{
    do something if false;
}
*/

//Definitions
//-If there is only one statement then we can write our statements without curly braces


//Examples of if else statements
/*
#include<stdio.h>

int main()
{
    system("color f2");
    int age;
    printf("Enter age: ");
    scanf("%d",&age);

    if(age>18){
        printf("Adult\n");
        printf("They can Vote\n");
        printf("They can drive\n");
    }

    else{
        printf("Not adult\n");
    }

    printf("---------------------------------------\n");
    printf("Thank you for your data:)\n");
    return 0;
}
*/

//ii.else if
/*
Syntax:
    if(condition 1){
        do something if true;
    }

    else if(condition 2){
        do something if false;
    }

    else if{
        do something if both condition 1 & condition 2 are not same;
    }
*/

//Example of else if statement
/*
#include<stdio.h>

int main()
{
    system("color f0");
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    if(age<13){
        printf("Children\n");
    }
    else if(age>=13 && age<=18){
        printf("Teenagers\n");
    }
    else{
        printf("Adults\n");
    }
    return 0;
}
*/

//Q.Write a program to determine whether a given year is a leap year.
/*
#include<stdio.h>

int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);

   if(year % 4 == 0){
    if(year%100 != 0 || year%400 != 0){
        printf("Leap Year");
    }
    else{
        printf("Not a leap year");
    }
}

else{
    printf("Not a leap year");
}
return 0;
}
*/

/*
Q.Given marks in a subject, write a program to calculate the grade based on the following conditions:

Marks >= 90: Grade A
Marks >= 75 and < 90: Grade B
Marks >= 50 and < 75: Grade C
Marks >= 30 and < 50: Grade D
Marks <30 : Fail
*/

/*
#include<stdio.h>

void main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);

    if(marks >= 90){
        printf("Grade A");
    }
    else if(marks >= 75 && marks<90){
        printf("Grade B");
    }
    else if(marks >= 50 && marks<75){
        printf("Grade C");
    }
    else if(marks>=30 && marks<50){
        printf("Grade D");
    }
    else{
        printf("Fail");
    }

}
*/

//Q.Write a program to check whether a given character is a vowel or consonant.
/*
#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("Vowel");
    }
    else if(ch>='a' && ch<='z'){
        printf("consonant");
    }
    else{
        printf("not a character");
    }
}

*/

//Q.Write a program to find if a character entered by user is uppercase or lowercase.
/*
#include<stdio.h>

int main()
{
    system("color f0");
    char ch;
    printf("Enter a letter: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("%c is a uppercase letter\n",ch);
    }
    else if(ch >= 'a' && ch<= 'z'){
        printf("%c is a lowercase letter\n",ch);
    }
    else{
        printf("%c is not an english letter\n",ch);
    }
    return 0;
}
*/



//#Conditional Operator
//i.Ternary Operator

//Syntax:
//Condition ? do something if true : do something if false;
/*
#include<stdio.h>
void main()
{
    int age;
    printf("Enter value of a: ");
    scanf("%d",&age);

    //using ternary operator
    age>=18 ? printf("Adult") : printf("Teenager");
}
*/


/*
2.switch statement

syntax:
switch(case)
{
case 1:
    do something
    break;
case 2:
    do something
    break;
default:
    do something
    break;
}

*/

//Example of switch case statement
/*
#include<stdio.h>

int main()
{
    int day;
    printf("Enter day(1-7): ");
    scanf("%d",&day);

    switch(day)
    {
    case 1:
        printf("Sunday");c
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}
*/


//Nested if

//EG: program to check the given number is positive or negative if positive then check if it is odd or even using nested if statement
/*
#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number to check: ");
    scanf("%d",&num);

    if(num>0){
        printf("Positive\n");
        if(num%2 == 0){         //Nested if used inside the if statement
            printf("Even\n");
        }
        else{
            printf("Odd");
        }
    }
    else{
        printf("Negative");
    }
    return 0;
}
*/




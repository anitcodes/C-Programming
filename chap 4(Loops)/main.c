                        //Loop Control Instruction

/*
1.for loop
2.while loop
3.do while loop
*/



//1. for loop

//syntax:
//    for(initialization;condition;updation){
//        do something
//    }

//use for loop to print the number 0-10
/*
#include<stdio.h>

int main()
{
    int i;
    for(i=0;i<=10;i++){
        printf("%d\n",i);
    }

    printf("----------------------\n");

    char j;
    for(j='a';j<='z';j++){
        printf("%c\n",j);
    }
    return 0;
}
*/

//Types of operator:
//    i.Increment operator (pre-increment(++i),post-increment(i++))
//    ii.Decrement operator (pre-decrement(--i),post-decrement(i++))

// post-increment -> first use then increase
// pre-increment -> first increase then increse

/*
#include<stdio.h>

int main()
{
    int i=1;
    printf("%d",++i); //Pre-Increment Operator
    printf("%d",i++); //Post-Increment Operator
    printf("%d",--i); //Pre-Decrement Operator
    printf("%d",i++); //Post-Increment Operator
}

*/



//2.while loop

//Syntax:
//    while(condition){
//        do something
//    }


//Q.Implementation of while loop
/*
#include<stdio.h>

int main()
{
    int i =1;
    while(i<=5){
        printf("%d\n",i);
        i++;
    }
}
*/

//Q.Print the number from 0 to n, if n is given by the user.
//Using for loop
/*
#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter the value for n: ");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;
}
*/

//Using while loop
/*
#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int i=0;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}
*/


//3. do while loop

//Syntax:
//    do{
//        do something
//    }while(condition);

/*
#include<stdio.h>

int main()
{
    int i=5;
    do{
        printf("%d\n",i);
        i--;
    }while(i>=1);
}
*/

//Q.Print the sum of first n natural number.

//#include<stdio.h>
//
//int main()
//{
//    int n;
//    printf("Enter a number: ");
//    scanf("%d",&n);
//
//    int sum = 0;
//    for(int i=1;i<=n;i++){
//        sum = sum + i;
//        printf("sum is %d\n",sum);
//    }
//return 0;
//}


//multiplication table of user given number
/*
#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
    return 0;
}
*/


//#Break and Continue
/*
#include<stdio.h>

int main()
{
    for(int i=1;i<=5;i++){
        printf("%d\n",i);
    }

    printf("--------------------------------\n");
    for(int i=1;i<=5;i++){
            if(i==3){
                break;
            }
        printf("%d\n",i);
    }
    printf("End");
    return 0;
}
*/


//Q.Keep taking numbers as input from user until users enters an odd number.
/*
#include<stdio.h>

int main()
{
    int n;
    do{
        printf("Enter a number: ");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n%2 != 0){
            break;
        }

    }while(1);
    printf("Oopps! Its an Odd Number");
    return 0;
}
*/


//Continue
/*
#include<stdio.h>

int main()
{
    int i;
    for(i=1;i<=5;i++){
        if(i==3){
            continue;       //except 3 other will be display
        }
        printf("%d\n",i);
    }
    return 0;
}
*/

//Q.Print all the odd numbers from 5 to 50.
/*
#include<stdio.h>

int main()
{
    int i;
    for(i=5;i<=50;i++){
            if(i%2 !=   0){  //odd
               printf("%d\n",i);
            }
    }
    return 0;
}
*/


//Problem of factorial is left




//Q. Search on what a "nested loop" is & print this
//pattern using it.
//*****
//*****
//*****
//*****
/*
#include<stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=5;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/


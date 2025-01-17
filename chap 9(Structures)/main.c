                //Structure in C programming


/*
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

//user defined data type
struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1;
    s1.roll = 123;
    s1.cgpa =  4;
    strcpy(s1.name, "Anit");

    printf("Student Name = %s\n",s1.name);
    printf("Roll Number = %d\n",s1.roll);
    printf("CGPA = %.2f\n",s1.cgpa);

    return 0;
}
*/



/*
#include<stdio.h>
#include<string.h>

struct emp
{
    int empId;
    char empName[30];
    int empSalary;
    char empAddress[50];
};

int main()
{
    struct emp e;
    e.empId = 1001;
    strcpy(e.empName,"Shreyans");
    e.empSalary = 200000;
    strcpy(e.empAddress,"Kalimati");

    printf("%d\n",e.empId);
    printf("%s\n",e.empName);
    printf("%d\n",e.empSalary);
    printf("%s\n",e.empAddress);

    return 0;
}
*/




/*Create a structure “Employee” having Name, Address, Salary, and Age as member functions.
Display the name of the employee having aged between 40 and 50 are living in Kathmandu.*/

/*

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//User defined member functions
struct Employee
{
    char Name[20];
    char Address[50];
    int Salary;
    int Age;
};

int main()
{
    struct Employee emp;

    emp.Salary = 2000;
    emp.Age = 20;
    strcpy(emp.Name,"Anit");
    strcpy(emp.Address,"Kathmandu");

    printf("Name = %s\n",emp.Name);
    printf("Address = %s\n",emp.Address);
    printf("Salary = %d\n",emp.Salary);
    printf("Age = %d\n",emp.Age);

    return 0;
}

*/

/*

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    char name[20];
    int roll;
    char class[10];
    int age;
};

int main()
{
    struct student s1 = {"Anit",1,"Bachelor",21};

    printf("Name = %s\n",s1.name);
    printf("Roll no = %d\n",s1.roll);
    printf("Class = %s\n",s1.class);
    printf("Age = %d\n",s1.age);

    return 0;
}
*/


/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    char name[20];
    int roll;
    char class[10];
    int age;
};

int main()
{
    struct student csit[6];
    strcpy(csit[0].name,"Anit");
    csit[0].roll = 1;
    strcpy(csit[0].class,"Bachelor");
    csit[0].age = 21;

    printf("Name = %s\n",csit[0].name);
    printf("Roll no = %d\n",csit[0].roll);
    printf("Class = %s\n",csit[0].class);
    printf("Age = %d\n\n",csit[0].age);

    return 0;
}
*/

///*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    char name[20];
    int roll;
    char class[10];
    int age;
};

int main()
{
    struct student s1 = {"Anit",1,"Bachelor",20};

    printf("Name = %s\n",s1.name);
    printf("Roll no = %d\n",s1.roll);
    printf("Class = %s\n",s1.class);
    printf("Age = %d\n\n",s1.age);

    struct student *ptr = &s1;
    printf("student roll no. with pointer = %d\n", (*ptr).roll);
    printf("student roll no. with arrow function = %d\n", ptr->roll);

    return 0;
}
//*/





#include <stdio.h>

int main()
{
    int age = 21;
    int *ptr = &age;
    printf("%p\n",&age);
    printf("%p\n",ptr);
    return 0;
}

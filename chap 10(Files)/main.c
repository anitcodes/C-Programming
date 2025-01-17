                    //Files Input/Output

#include<stdio.h>


int main()
{
    FILE *fptr;
    fptr = fopen("text.txt","w");

    fprintf(fptr,"%d", '26156156151');

    fclose(fptr);
    return 0;
}

//program to understand the use of fprintf()
//c in depth
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE *fptr;
    char name[10];
    int phoneNumber;
    if((fptr = fopen("Phonebook.txt","a")) == NULL)
    {
        printf("Error in opening file\n");
        exit(1);
    }
    printf("Enter your name and phone number: \n");
    scanf("%s%d",name,&phoneNumber);
    fprintf(fptr, "My name is %s and phone number is %d\n",name,phoneNumber);
    fclose(fptr);
    return 0;
}
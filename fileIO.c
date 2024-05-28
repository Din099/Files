//CS50 - lecture 4- Memory
//File operation
#include<stdio.h>
#include<string.h>
//#include<cs50.h>
int main()
{
    FILE *file = fopen("Phonebook.txt", "a");
    if(file == NULL)
    {
        return 1;
    }
    char* name;
    char* number;
    
    scanf("%s%s",name,number);

    fprintf(file, "%s %s\n", name,number);
    fclose(file);
}
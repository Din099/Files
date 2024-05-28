//understanding the use of fgetc() function
//C in depth
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE *fptr;
    int ch;
    if((fptr = fopen("fputc.txt","r")) == NULL)
    {
        printf("Error in opening file\n");
        exit(1);
    }
    printf("Enter text: \n");
    //ctrl+z/ctrl+d to stop reading characters 
    // ch = fgetc(fptr);
    // while(ch != EOF)
    // {
    //     printf("%c",ch);
    //     ch = fgetc(fptr);
    // } 
//above while loop is same    
    while((ch=fgetc(fptr))!=EOF)
        printf("%c",ch);
    fclose(fptr);
    return 0;
}
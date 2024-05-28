//File operations C in Depth
//fputc function
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE *fptr;
    int ch;
    if((fptr = fopen("fputc.txt","w")) == NULL)
    {
        printf("Error in opening file\n");
        exit(1);
    }
    printf("Enter text: \n");
    //ctrl+z/ctrl+d to stop reading characters 
    while((ch=getchar())!=EOF)
        fputc(ch,fptr);
    fclose(fptr);
    return 0;
}
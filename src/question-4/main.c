#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int strEquals(char a[], char b[])  
{  
    int flag=1, i=0;  

    while(a[i]!='\0' && b[i]!='\0')
    {
       if(a[i]!=b[i])  
       {  
           flag = 0;  
           break;  
       }  
       i++;  
    }  

    return flag; 
}  

int main(int argc, char *argv[])
{
    char* keyBoardCommand;
    char* exitCommand = "SAIR";

    while(scanf("%s", keyBoardCommand) && strEquals(keyBoardCommand, exitCommand) != 1)
    {
        printf("Mocked process...\n");
    }

    return 0;
}

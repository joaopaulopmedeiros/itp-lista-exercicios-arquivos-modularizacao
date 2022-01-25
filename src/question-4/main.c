#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int strEquals(char a[], char b[])  
{  
    int equals=1, i=0;  

    while(a[i]!='\0' && b[i]!='\0')
    {
       if(a[i]!=b[i])  
       {  
           equals = 0;  
           break;  
       }  
       i++;  
    }  

    return equals; 
}  

char* currentDateTime()
{    
    time_t now;

    time(&now);

    return ctime(&now);
}

void logMessage(char* message) {
    FILE* file = fopen("./log.txt", "a+");
    fprintf(file, "%s%s\n", currentDateTime(), message);
    fclose(file);
}

int main(int argc, char *argv[])
{
    char* keyBoardCommand;
    char* exitCommand = "SAIR";

    logMessage("Inicio");

    while(scanf("%s", keyBoardCommand) && strEquals(keyBoardCommand, exitCommand) != 1)
    {
        printf("\nMocked process...\n");
    }

    logMessage("Fim");

    return 0;
}

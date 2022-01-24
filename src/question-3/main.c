#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[])
{
    char ch;
    char sourceFilePath[20] = argv[1];
    char targetFilePath[20] = argv[2];
    
    FILE *sourceFile, *targetFile;

    sourceFile = fopen(sourceFilePath, "r");
 
    if(sourceFile == NULL)
    {
      printf("Pressione qualquer tecla para sair...\n");
      exit(EXIT_FAILURE);
    }
 
    targetFile = fopen(targetFilePath, "w");
 
    if(targetFile == NULL)
    {
      fclose(sourceFile);
      printf("Pressione qualquer tecla para sair...\n");
      exit(EXIT_FAILURE);
    }
 
    while((ch = fgetc(sourceFile)) != EOF) {
       fputc(ch, targetFile);
    }
 
    printf("Arquivo copiado!\n");
 
    fclose(sourceFile);

    fclose(targetFile);

    return 0;
}

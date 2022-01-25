#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char ch;
    
    FILE *sourceFile, *targetFile;

    sourceFile = fopen(argv[1], "r");
 
    if(sourceFile == NULL)
    {
      printf("[source file] Encerrando aplicação por falta de caminho fornecido...\n");
      exit(EXIT_FAILURE);
    }
 
    targetFile = fopen(argv[2], "w");
 
    if(targetFile == NULL)
    {
      fclose(sourceFile);
      printf("[target file] Encerrando aplicação por falta de caminho fornecido...\n");
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

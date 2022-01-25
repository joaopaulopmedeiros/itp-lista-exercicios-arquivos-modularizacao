#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *file;

    file = fopen(argv[1], "rb");
 
    if(file == NULL)
    {
      printf("[file] Encerrando aplicação por falta de caminho fornecido...\n");
      exit(EXIT_FAILURE);
    }

    fseek(file, 2, SEEK_SET);

    int length = ftell(file); 

    rewind(file);

    char* buffer = (char *) malloc(length * sizeof(char));

    fread(buffer, length, 1, file);

    printf("Dois primeiros bytes de arquivo: %hhx", buffer);

    free(buffer);
    
    fclose(file);

    return 0;
}

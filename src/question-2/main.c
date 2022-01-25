#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char result[2];

    FILE *file;

    file = fopen(argv[1], "rb");
 
    if(file == NULL)
    {
      printf("[file] Encerrando aplicação por falta de caminho fornecido...\n");
      exit(EXIT_FAILURE);
    }

    fgets(result, 2, file);
    
    printf("%s", result);

    fclose(file);

    return 0;
}

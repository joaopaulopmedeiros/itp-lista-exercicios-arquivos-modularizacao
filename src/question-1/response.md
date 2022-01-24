# Modos de Leitura de Arquivos em C

## Arquivos de Texto

|  Modo |  Descrição
|---|---
| r  | Leitura de arquivo caso exista.
| r+  | Leitura/Escrita. Permite modificação do arquivo lido caso exista.
| w+  | Leitura/Escrita. Caso o arquivo não exista, um novo é criado. Se já houver algum, este será deletado.
| a+  |  Leitura/Escrita. Funciona como append, isto é, adiciona dados ao fim de arquivo.


## Arquivos Binários

|  Modo |  Descrição
|---|---
| rb  | Leitura. Arquivo deve existir.
| r+b  | Leitura/Escrita. Neste modo o arquivo precisa ser existente, podendo ser modificado.
| w+b  | Leitura/Escrita. Cria o arquivo se não houver. Apaga o anterior se existir.
| a+b  |  Leitura/Escrita. Os dados são adicionados ao fim do arquivo, como append.
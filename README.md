# Trabalho-1
Repositório contendo as especificações do Trabalho 1 da disciplina de LP1

# Pastas e especificações

- src - Contém todos os arquivos ``.cpp``;
- include - Contém todos os arquivos ``.h``;
- bin - Contém todos os aquivos binários (executáveis);
- data - Contém os arquivos de aposta;
- build - Contém os arquivos que o ``cmake`` cria.

# Como compilar o projeto

 ```cpp
 if(!exists_dir(build)){
     create_dir(build);
     get_in(build);
     run_command(cmake ..);
     run_command(cmake --build .);
 }
 else{
     get_in(build);
     run_command(make);
 }
 ```
 
# Como executar o projeto
 Após isso, você poderá executar o projeto pelo arquivo binário ``keno`` na pasta ``bin`` pelo terminal com o comando ``./keno``.
 
## Como ler os arquivos de aposta
Execute o binário ``keno`` com o arquivo de aposta logo depois dele.

Exemplo:

``./keno ../data/bet_12stpors.dat``.

## Documento de Especificação

Leia o documento de especificação contido em [Especificação do Trabalho 1](https://docs.google.com/document/d/1nwQxiP9YQzU3O-H4YQMqWRtylqO1AOke8y1rQF7cPEc/edit?usp=sharing). Preencha o autor.md com as informações relativas ao grupo/autor.

# Trabalho-1
Repositório contendo as especificações do Trabalho 1 da disciplina de LP1

# Pastas e especificações

- src - Contém todos os arquivos ``.cpp``;
- include - Contém todos os arquivos ``.h``;
- data - Contém os arquivos de aposta;
- build - Contém o ``Makefile``, o binário ``keno*`` e todos os outros arquivos que o ``cmake`` cria.

# Como compilar o projeto
  Caso a pasta ``build`` ainda não exista. Crie-a, entre nela e execute os comandos ``cmake ..`` e
  ``cmake --build``.
  Caso já exista, é só entrar nela e executar o comando ``make``.

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
 Você poderá executar o projeto pelo arquivo binário ``keno`` na pasta ``build`` pelo terminal com o comando ``./keno``.
 
## Como ler os arquivos de aposta
Execute o binário ``keno`` com o arquivo de aposta logo depois dele.

Exemplo:

``./keno ../data/bet1.dat``.

## Como ter ajuda
  É só executar o comando ``./keno --help`` dentro da pasta build.

## Documento de Especificação

Leia o documento de especificação contido em [Especificação do Trabalho 1](https://docs.google.com/document/d/1nwQxiP9YQzU3O-H4YQMqWRtylqO1AOke8y1rQF7cPEc/edit?usp=sharing). Preencha o autor.md com as informações relativas ao grupo/autor.

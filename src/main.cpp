#include <iomanip>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "KenoBet.h"
#include "io.h"
#include "definitions.h"

/* Mensagens para usar nos laços para as condições.
 Obrigatórias :

if(alguma coisa){
        cout << " mensagem " << endl;
        return 0;
    }

1. Numeros repetidos :
if(alguma coisa){
        cout << "Um ou mais número repetido, comando inválido. Favor repetir" << endl;
        return 0;
    }
2.Quantidade de números apostados superior a 15
if(alguma coisa){
        cout << "Número de spots acima de 15, favor refazer com número de spots até 15." << endl;
        return 0;
    }
3.Presença de caractere estranho
if(alguma coisa){
        cout << "O arquivo possui algum caractere não suportado pelo programa. Favor refazer o arquivo sem o caractere especial" << endl;
        return 0;
    }
4.Formatação diferente da proposta para o arquivo de respostas
if(alguma coisa){
        cout << "A formatação do arquivo de apostas está diferente do formato correto. Favor editar ele seguindo a seguinte ordem:
        
        ----------------------------
        
        Valor do crédito inicial
        Numero de rodadas
        conjunto de até 15 números inteiros

        ----------------------------

        exemplo:

       500
       3
       1 4 34 7 32 71 
       
       
       Favor repetir seguindo as orientações acima." << endl;
        return 0;
    }
5.Arquivo de apostas inexistente.

if(alguma coisa){
        cout << " O arquivo de apostas é inexistente. Favor inserir um arquivo de apostas válido.  " << endl;
        return 0;
    }

Telinha inicial 


==================================================
==================================================
Bem vindo ao jogo de apostas Keno!
Aqui, a sua sorte pode valer até 1000 vezes o seu valor apostado!

             .'`'.'`'.
         .''.`.  :  .`.''.
         '.    '. .'    .'
         .```  .' '.  ```.
         '..',`  :  `,'..'
              `-'`'-`))
                     ((    
                      \|
 
==================================================
==================================================
O que é o Keno ?
==================================================
Assim como loteria ou bingo, você irá escolher um valor financeiro,rodadas e um conjunto de números e caso esses sejam sorteados,  você receberá um valor que poderá crescer o valor inicial. Quanto mais sorte, mais dinheiro você ganha.*

==================================================
O jogo Keno funciona da seguinte maneira:
==================================================
Você vai precisar pensar em 3 valores :
- O valor inicial que você quer apostar
- O número de rodadas que você quer jogador
- Um conjunto de elementos de 1 a 15, que vão do número 1 a 80.

==================================================
Monte seu arquivo .dat seguindo as especificações :
==================================================
        Valor do crédito inicial
        Numero de rodadas
        conjunto de até 15 números inteiros
        ----------------------------
        exemplo:

       500
       3
       1 4 34 7 32 71 

==================================================
Escolha seus valores, insira o arquivo seguindo as recomendações acima, e boa sorte!
==================================================
Favor inserir seu arquivo :
==================================================

Esta é a rodada <y> de <x rodadas>, sua aposta é de <valor apostado> . Boa sorte




*/

int main(int argc, char *argv[]){

    if(argc < 2){
        cout << "Por favor, especifique o arquivo de apostas na hora de executar o Keno." << endl;
        return 0;
    }

    KenoBet bet;
    string bets;

    ifstream file(argv[1]); //Read from the dat file.

    //Convert the values of the dat file from strings to numbers.

    getline(file, bets); //Get the credits string.
    bet.set_wage(io::str_to_num(bets));
    cout << bet.get_wage() << endl;

    getline(file, bets); //Get the rounds string.
    bet.m_rounds = (number_type)io::str_to_num(bets);

    getline(file, bets); //Get the spots string.

    std::string delimiter = " ";
    size_t pos = 0;
    std::string token;

    //Add all the string's tokens into the bet.m_spots vector.
    while((pos = bets.find(delimiter)) != std::string::npos){
        token = bets.substr(0, pos); //Break the string into tokens.
        bet.add_number((number_type)io::str_to_num(token));
        bets.erase(0, pos + delimiter.length()); //Erase the token from the original string.
    }

    //Add the last string token into the bet.m_spots vector.
    bet.add_number((number_type)io::str_to_num(bets));

    io::prt_vec(bet.get_spots());
    bet.qksort(bet.get_begin(), bet.get_end()-1);
    io::prt_vec(bet.get_spots());

    file.close(); //End of the bets conversion.
    return 0;
}

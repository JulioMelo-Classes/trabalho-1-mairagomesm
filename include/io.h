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

/*
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

 
 //quando o programa já leu//

==================================================
Aposta recebida!
==================================================
Você está apostando <x> em créditos.
Estará em um total de <x> rodadas, apostando <x> em créditos a cada jogada.
Sua aposta tem <x> numeros, eles são : [ ]
==================================================
//reposta dos resultados//
==================================================
Rodada #1 de 3, sua aposta é $500. Boa sorte!
==================================================

Resultados do sorteio : []

Dessa forma, os números em comum, que você acertou, foram : []
Nessa rodada, você teve x hits, tendo taxa de retorno de y, assim, nessa rodada, você obteve :
Você possui um total de créditos de : créditos.

==================================================
*****************Fim das rodadas*****************
==================================================
        .-.-.
       (_\|/_)
       ( /|\ )       __  
        '-'-'`-.__.-'  `-  
==================================================
Resultados finais :
Você começou o jogo com
Você obteve 
E seu crédito final é :
==================================================
Quanta sorte! Esperamos que volte a jogar conosco!

        .-.-.
       (_\|/_)
       ( /|\ )       __
        '-'-'`-.__.-'  `-

==================================================
*/

/*
 cout << " ==================================================
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
==================================================" << endl;
 */

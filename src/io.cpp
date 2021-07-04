#include "io.h"

void io::welcome(){
    cout << "\033[1;32m";
    cout << R"(
                                ██╗  ██╗███████╗███╗   ██╗ ██████╗                             
                                ██║ ██╔╝██╔════╝████╗  ██║██╔═══██╗                            
                                █████╔╝ █████╗  ██╔██╗ ██║██║   ██║                            
                                ██╔═██╗ ██╔══╝  ██║╚██╗██║██║   ██║                            
                                ██║  ██╗███████╗██║ ╚████║╚██████╔╝                            
                                ╚═╝  ╚═╝╚══════╝╚═╝  ╚═══╝ ╚═════╝                             
    )";
    cout << "\033[0m";
    print_big_clover();
}

void io::print_bar(){
    cout << "\033[1;34m";
    cout << R"(
    ==================================================)" << endl;
    cout << "\033[0m";
}

void io::print_small_clover(){
    
    cout << "\033[1;32m";
    cout << R"(
    .-.-.
    (_\|/_)
    ( /|\ )       __
    '-'-'`-.__.-'  `-
    )" << endl;
    cout << "\033[0m";
}

void io::print_big_clover(){
    cout << "\033[1;32m";
    cout << R"(
                                             .'`'.'`'.
                                         .''.`.  :  .`.''.
                                         '.    '. .'    .'
                                         .```  .' '.  ```.
                                         '..',`  :  `,'..'
                                              `-'`'-`))
                                                     ((    
                                                      \|
    )" << endl;
    cout << "\033[0m";

}

void io::help(){
    cout << "\033[1;34m";
    cout << R"(
    O que é o Keno ? 
    ==================================================
        Assim como loteria ou bingo, você irá escolher
    um valor financeiro,rodadas e um conjunto de 
    números e caso esses sejam sorteados, você 
    receberá um valor que poderá crescer o valor 
    inicial. Quanto mais sorte, mais dinheiro você 
    ganha.

    ==================================================

    O jogo Keno funciona da seguinte maneira:

    Você vai precisar pensar em 3 valores :
    - O valor inicial que você quer apostar
    - O número de rodadas que você quer jogador
    - Um conjunto de elementos de 1 a 15, que vão do número 1 a 80.

    ==================================================

    Monte seu arquivo .dat seguindo as especificações :

            Valor do crédito inicial
            Numero de rodadas
            conjunto de até 15 números inteiros
            ----------------------------
            exemplo:

             500
             3
             1 4 34 7 32 71 

    ==================================================

    Escolha seus valores, insira o arquivo seguindo as recomendações acima, e boa sorte!)" << endl;
    cout << "\033[0m";
}

void io::game_summary(cash_type initialMoney, cash_type profit, cash_type finalMoney){
    io::print_bar();
    cout << "\033[1;34m";
    cout << R"(
    Resumo do jogo :
    Você começou o jogo com <)" << setprecision(3) << initialMoney << R"(>
    Você obteve  <)" << setprecision(3) << profit << R"(>
    E seu crédito final é : <)" << setprecision(3) << finalMoney << ">" << endl << endl;

    io::print_bar();
    cout << "\033[1;32m";
    cout << R"(
                    ███████╗██╗███╗   ███╗    ██████╗ ███████╗         ██╗ ██████╗  ██████╗  ██████╗ 
                    ██╔════╝██║████╗ ████║    ██╔══██╗██╔════╝         ██║██╔═══██╗██╔════╝ ██╔═══██╗
                    █████╗  ██║██╔████╔██║    ██║  ██║█████╗           ██║██║   ██║██║  ███╗██║   ██║
                    ██╔══╝  ██║██║╚██╔╝██║    ██║  ██║██╔══╝      ██   ██║██║   ██║██║   ██║██║   ██║
                    ██║     ██║██║ ╚═╝ ██║    ██████╔╝███████╗    ╚█████╔╝╚██████╔╝╚██████╔╝╚██████╔╝
                    ╚═╝     ╚═╝╚═╝     ╚═╝    ╚═════╝ ╚══════╝     ╚════╝  ╚═════╝  ╚═════╝  ╚═════╝ 
    )" << endl;
    cout << "\033[0m";
}

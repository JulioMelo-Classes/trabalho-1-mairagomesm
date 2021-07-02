#include <iostream>
#include <fstream>
#include "KenoBet.h"
#include "func.h"

const cash_type arr[15][16] = {
{0, 3},
{0, 1, 9},
{0, 1, 2, 16},
{0, 0.5, 2, 6, 12},
{0, 0.5, 1, 3, 15, 50},
{0, 0.5, 1, 2, 3, 30, 75},
{0, 0.5, 0.5, 1, 6, 12, 36, 100},
{0, 0.5, 0.5, 1, 3, 6, 19, 90, 720},
{0, 0.5, 0.5, 1, 2, 4, 8, 20, 80, 1200},
{0, 0, 0.5, 1, 2, 3, 5, 10, 30, 600, 1800},
{0, 0, 0.5, 1, 1, 2, 6, 15, 25, 180, 1000, 3000},
{0, 0, 0, 0.5, 1, 2, 4, 24, 72, 250, 500, 2000, 4000},
{0, 0, 0, 0.5, 0.5, 3, 4, 5, 20, 80, 240, 500, 3000, 6000},
{0, 0, 0, 0.5, 0.5, 2, 3, 5, 12, 50, 150, 500, 1000, 2000, 7500},
{0, 0, 0, 0.5, 0.5, 1, 2, 5, 15, 50, 150, 300, 600, 1200, 2500, 10000}
};

int main(int argc, char *argv[]){

    srand(time(NULL)); //Creates the seed to generate random numbers.

    if(argc < 2){
        cout << "Por favor, especifique o arquivo de apostas na hora de executar o Keno." << endl;
        return 0;
    }

    KenoBet bet;
    string bets;

    ifstream file(argv[1]); //Reads from the .dat file.

    //Start converting the values of the .dat file from strings to numbers.

    getline(file, bets); //Get the credits string.
    bet.set_wage(func::str_to_num(bets));

    getline(file, bets); //Get the rounds string.
    bet.m_rounds = (number_type)func::str_to_num(bets);

    getline(file, bets); //Get the spots string.

    std::string delimiter = " ";
    size_t pos = 0;
    std::string token;

    //Add all the string's tokens into the bet.m_spots vector.
    while((pos = bets.find(delimiter)) != std::string::npos){
        token = bets.substr(0, pos); //Break the string into tokens.
        if(!bet.add_number((number_type)func::str_to_num(token))){
            cout << "Existem números repetidos no vetor!" << endl;
            return 0;
        }
        bets.erase(0, pos + delimiter.length()); //Erase the token from the original string.
    }

    //Add the last string token into the bet.m_spots vector.
    bet.add_number((number_type)func::str_to_num(bets));
    file.close(); 
    //End of the bets conversion.

    func::qksort(bet.get_begin(), bet.get_end()-1);
    int betNum = bet.get_spots().size();
    //cout << betNum << endl;
    set_of_numbers_type random; //Defines the drawn numbers vector.
    random.resize(20, 0);
    set_of_numbers_type match;   //Defines the matched numbers vector.

    cash_type initialMoney = bet.get_wage();
    cout << "Você esta apostando " << initialMoney << " dinheiros" << endl;
    cash_type perRound = bet.get_wage()/bet.m_rounds;
    cout << "E vai apostar " << perRound << " dinheiros por rodada" << endl;
    cout << "Você esta apostando " << betNum << " números:"<< endl << "[ ";
    func::prt_vec(bet.get_spots());
    cout << "]" << endl;

    while(bet.m_rounds != 0){
        initialMoney -= perRound;
        cout << "Você tem " << bet.m_rounds << " rodadas" << endl;
        func::create_random_vec(random, 0, 20);
        cout << "Os números aleatórios são:" << endl << "[ ";
        func::prt_vec(random);
        cout << "]" << endl;

        match = bet.get_hits(random);
        cout << "Você acertou " << match.size()<< " eles são:" << endl << "[ ";
        func::prt_vec(match);
        cout << "]" << endl; //Don't show the numbers when you dont match any

        cash_type returnRate = arr[betNum-1][match.size()];
        cout << "Você vai ganhar " << returnRate << "x o valor apostado" << endl; 
        cout << "Você sai com " << perRound*returnRate << " dinheiros nessa rodada" << endl; 
        bet.set_wage(initialMoney += perRound*returnRate);
        initialMoney = bet.get_wage();
        cout << "Você tem no total " << initialMoney << " dinheiros" << endl; 

        cout << endl;

        bet.m_rounds--;
    }


    cout << "FIM DO PROGRAMA" << endl;
    return 0;
}

#include <iomanip>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "KenoBet.h"
#include "io.h"
#include "definitions.h"

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

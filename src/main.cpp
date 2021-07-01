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

    string bets;
    cash_type credits;
    number_type rounds;
    set_of_numbers_type spots;

    // Read from the dat file.
    ifstream file(argv[1]);

    // Convert the values of the dat file from strings to numbers.

    getline(file, bets); //Get the credits string.
    credits = io::str_to_num(bets); //Get the credits real value.
    cout << "credits " << std::setprecision(8) << credits << endl;

    getline(file, bets); //Get the rounds string.
    rounds = (number_type)io::str_to_num(bets); //Get the rounds real value.

    getline(file, bets); //Get the spots string.
    std::string delimiter = " ";
    size_t pos = 0;
    std::string token;
    while((pos = bets.find(delimiter)) != std::string::npos){
        token = bets.substr(0, pos); //Break the string in tokens.
        spots.push_back((number_type)io::str_to_num(token)); //Put all the tokens in the spots.
        bets.erase(0, pos + delimiter.length());
    }
    spots.push_back((number_type)io::str_to_num(bets)); //Put the last value in the spots.

    file.close(); 
    return 0;
}

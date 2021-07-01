#include <iomanip>
#include <iostream>
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
    getline(file, bets);
    io::str_to_num(bets, &credits, 0);
    cout << "credits " << credits << endl;
    cout << std::setprecision(9) << credits << endl;
    getline(file, bets);
    io::str_to_num(bets, &rounds, 1);
    cout << "rounds " << rounds << endl;
    getline(file, bets);
    //io::str_to_num(bets, &spots, 2);
    //cout << "spots " << spots << endl;

    file.close(); 
    return 0;
}

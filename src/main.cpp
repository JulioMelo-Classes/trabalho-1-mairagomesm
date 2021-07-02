#include <iostream>
#include <fstream>
#include "KenoBet.h"
#include "func.h"

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
    cout << bet.get_wage() << endl;

    getline(file, bets); //Get the rounds string.
    bet.m_rounds = (number_type)func::str_to_num(bets);

    getline(file, bets); //Get the spots string.

    std::string delimiter = " ";
    size_t pos = 0;
    std::string token;

    //Add all the string's tokens into the bet.m_spots vector.
    while((pos = bets.find(delimiter)) != std::string::npos){
        token = bets.substr(0, pos); //Break the string into tokens.
        bet.add_number((number_type)func::str_to_num(token));
        bets.erase(0, pos + delimiter.length()); //Erase the token from the original string.
    }

    //Add the last string token into the bet.m_spots vector.
    bet.add_number((number_type)func::str_to_num(bets));

    func::prt_vec(bet.get_spots());
    func::qksort(bet.get_begin(), bet.get_end()-1);
    func::prt_vec(bet.get_spots());

    set_of_numbers_type random; //Defines the drawn numbers vector.
    set_of_numbers_type match;   //Defines the matched numbers vector.
    random.resize(20, 0);
    func::create_random_vec(random, 0, 20);
    func::prt_vec(random);
    match = bet.hits(random);
    func::prt_vec(match);
    cout << match.size() << endl;
    //func::prt_array(arr);
    
    file.close(); 
    //End of the bets conversion.

    cout << "FIM DO PROGRAMA" << endl;
    return 0;
}

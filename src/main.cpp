#include <iostream>
#include <string>
#include <fstream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;

int main(int argc, char *argv[]){

    for(int i=0; i<argc; i++) //Print all arguments
        cout<<"Argumento["<<i<<"]: "<<argv[i]<<endl;

    string bets;

    // Read from the dat file
    ifstream file(argv[1]);

    while(getline(file, bets)) //Prints everything inside the dat file
        cout << bets << endl;

    file.close(); 
    return 0;
}


#ifndef IO_H
#define IO_H
#include <ctime>
#include <string>
#include <sstream>
#include "definitions.h"

//! @brief This file contains some random as hell funcions.

/*!
 * @param bets A string that contains the credits, rounds or spots of the bets file.
 * @return num The float value of the string. */

namespace func{
    float str_to_num(string bets){
        float num;
        stringstream ss;  
        ss << bets;  
        ss >> num;  
        return num;
    }

    void prt_vec(set_of_numbers_type v){ 
        for(auto i=0; i < (int)v.size(); i++) 
            cout << v[i] << " "; 
          
        cout << endl;
    } 

    void create_random_vec(set_of_numbers_type &v){
        for(int i = 0; i < 20; ++i){
           v.push_back(rand() % 81); 
        }
    }

    void prt_array(cash_type v[][16]){
        for (int i = 0; i < 15; i++){
            cout << i << " ";
            for (int j = 0; j < 16; j++){
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }

}
#endif

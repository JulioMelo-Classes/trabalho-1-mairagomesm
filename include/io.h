#ifndef IO_H
#define IO_H
#include <string>
#include <sstream>
#include "definitions.h"

//! @brief This file contains some random as hell funcions.

/*!
 * @param bets A string that contains the credits, rounds or spots of the bets file.
 * @return num The float value of the string. */
namespace io{
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
}
#endif

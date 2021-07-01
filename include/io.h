#ifndef IO_H
#define IO_H
#include <string>
#include <sstream>
#include "definitions.h"

//! @brief This file contains all the functions related to the input and output of the program.

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
}
#endif

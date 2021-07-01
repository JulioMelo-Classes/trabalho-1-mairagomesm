#ifndef IO_H
#define IO_H
#include <string>
#include <sstream>
#include "definitions.h"

//! @brief This file contains all the functions related to the input and output of the program.

/*!
 * @param bet A string that contains the credits, rounds or spots of the bet file.
 * @param *num A pointer to the converted value of the credits, rounds or spots. Can be a int of
 * float.*/
namespace io{
    float str_to_num(string bet){
        float num;
        stringstream ss;  
        ss << bet;  
        ss >> num;  
        return num;
    }
}
#endif

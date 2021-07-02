#ifndef FUNC_H
#define FUNC_H
#include <algorithm>
#include <sstream>
#include "definitions.h"

//! @brief This file contains some random as hell funcions.

namespace func{
    /*!
    * @param bets A string that contains the credits, rounds or spots of the bets file.
    * @return num The float value of the string. */
    float str_to_num(string bets);

    void prt_vec(set_of_numbers_type v);

    template<class ForwardIt>
    ForwardIt divide(ForwardIt right, ForwardIt left);

    template<class ForwardIt>
    void qksort(ForwardIt right, ForwardIt left);

    void create_random_vec(set_of_numbers_type &v, int y, int x);

    void prt_array(cash_type v[][16]);
}
#endif

#ifndef IO_H
#define IO_H
#include <iostream>
#include <iomanip>
#include "definitions.h"

namespace io{

    void wellcome();

    void print_bar();

    void print_small_clover();

    void print_big_clover();

    void help();

    void game_summary(cash_type, cash_type, cash_type);
}
#endif

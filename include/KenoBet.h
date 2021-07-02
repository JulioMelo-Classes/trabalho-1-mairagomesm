#ifndef KENOBET_H
#define KENOBET_H
#include <vector>
#include "definitions.h"

class KenoBet {
    public:
        int m_rounds = 0;

        //! Creates an empty Keno bet.
        KenoBet( ) : m_wage(0)
        { /* empty */ };

        /*! Adds a number to the spots only if the number is not already there.
            @param spot_ The number we wish to include in the bet.
            @return T if number chosen is successfully inserted; F otherwise. */
        bool add_number(number_type spot_);

        /*! Sets the amount of money the player is betting.
            @param wage_ The wage.
            @return True if we have a wage above zero; false otherwise. */
        bool set_wage(cash_type wage_);

        //! Resets a bet to an empty state.
        void reset( void );

        /*! Retrieves the player's wage on this bet.
            @return The wage value. */
        cash_type get_wage( void ) const;

        /*! Returns to the current number of spots in the player's bet.
            @return Number of spots present in the bet. */
        size_t size( void ) const;

        /*! Determine how many spots match the hits passed as argument.
            @param hits_ List of hits randomly chosen by the computer.
            @return An vector with the list of hits. */
        //set_of_numbers_type get_hits(const set_of_numbers_type &hits_) const;
        set_of_numbers_type get_hits(set_of_numbers_type random);

        /*! Return a vector< spot_type > with the spots the player has picked so far.
            @return The vector< spot_type > with the player's spots picked so far. */
        set_of_numbers_type get_spots(void) const;

        
        itr_of_num_type get_begin(void);

        itr_of_num_type get_end(void);

    private:
        cash_type m_wage = 0;         //<! The player's wage
        set_of_numbers_type m_spots;  //<! The player's bet.
};
#endif

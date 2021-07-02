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
        bool add_number(number_type spot_){
            //TODO
            m_spots.push_back(spot_);
            return true;
        }

        /*! Sets the amount of money the player is betting.
            @param wage_ The wage.
            @return True if we have a wage above zero; false otherwise. */
        bool set_wage(cash_type wage_){
            if(wage_ > 0){
                m_wage = wage_;
                return true;
            }
            else return false;
        }

        //! Resets a bet to an empty state.
        void reset( void ){
            m_wage = 0;
            m_rounds = 0;
            m_spots.clear();
        }

        /*! Retrieves the player's wage on this bet.
            @return The wage value. */
        cash_type get_wage( void ) const {return m_wage;}

        /*! Returns to the current number of spots in the player's bet.
            @return Number of spots present in the bet. */
        size_t size( void ) const {return m_spots.size();}

        /*! Determine how many spots match the hits passed as argument.
            @param hits_ List of hits randomly chosen by the computer.
            @return An vector with the list of hits. */
        set_of_numbers_type get_hits(const set_of_numbers_type &hits_) const{
            //TODO
            return m_spots;
        }

        /*! Return a vector< spot_type > with the spots the player has picked so far.
            @return The vector< spot_type > with the player's spots picked so far. */
        set_of_numbers_type get_spots(void) const {return m_spots;}

        
        itr_of_num_type get_begin(void){
            return m_spots.begin();
        }

        itr_of_num_type get_end(void){
            return m_spots.end();
        }

        set_of_numbers_type hits(set_of_numbers_type random){
            set_of_numbers_type hits;
            for (int i = 0; i < (int)m_spots.size(); i++){
                for (int j = 0; j < (int)random.size(); j++){
                    if(m_spots[i] == random[j]){
                        cout << m_spots[i] << endl;
                        hits.push_back(m_spots[i]);
                    }
                }
            }
            return hits;
        }

    private:
        cash_type m_wage = 0;             //<! The player's wage
        set_of_numbers_type m_spots;  //<! The player's bet.
};


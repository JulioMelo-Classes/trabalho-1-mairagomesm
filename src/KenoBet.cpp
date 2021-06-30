#include <vector>
#include <cstddef>
using number_type = unsigned short int; //<! data type for a keno hit.
using cash_type = float; //<! Defines the wage type in this application.
using set_of_numbers_type = std::vector< number_type >;

class KenoBet {
    public:
        KenoBet( ) : m_wage(0)
        { /* empty */ };

        bool add_number( number_type spot_ );

        bool set_wage( cash_type wage_ );

        void reset( void );

        cash_type get_wage( void ) const;

        size_t size( void ) const;

        set_of_numbers_type
        get_hits( const set_of_numbers_type & hits_ ) const;

        set_of_numbers_type get_spots( void ) const;

    private:
        set_of_numbers_type m_spots;  //<! The player's bet.
        cash_type m_wage;             //<! The player's wage
};


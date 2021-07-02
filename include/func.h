#ifndef IO_H
#define IO_H
#include <algorithm>
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
        template<class ForwardIt>
        ForwardIt divide(ForwardIt right, ForwardIt left){ 
            ForwardIt pivot = left;
            ForwardIt i = right-1;   

            for (ForwardIt j = right; j < left; j++){ 
                if(*j <= *pivot){ 
                    i++;
                    iter_swap(i, j); 
                } 
            } 
            iter_swap(i+1, left); 
            return i+1; 
        } 
           
        template<class ForwardIt>
        void qksort(ForwardIt right, ForwardIt left){ 
            if(right < left){ 
                ForwardIt pivot = divide(right, left); 
                qksort(right, pivot-1); 
                qksort(pivot+1, left); 
            } 
        } 

    void create_random_vec(set_of_numbers_type &v, int y, int x){
        for(int i = y; i < x; ++i){
           //v.push_back(rand() % 81);
           v[i] = (rand() % 81);
           //cout << v[i] << endl;
        }
        auto begin = v.begin();
        auto last = v.end()-1;
        qksort(begin, last);
        begin = v.begin();
        last = v.end();
        auto trash = std::unique(begin, last);
        int index = std::distance(v.begin(), trash); 
        int nice = std::distance(v.begin(), v.end()); 
        cout << "Here" << index << " " << nice << endl;
        if(index != nice){
            create_random_vec(v, index, nice);
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

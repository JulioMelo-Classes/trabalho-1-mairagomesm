#include "func.h"

cash_type arr[15][16] = {
{0, 3},
{0, 1, 9},
{0, 2, 16},
{0, 0.5, 2, 6, 12},
{0, 0.5, 1, 3, 15, 50},
{0, 0.5, 1, 2, 3, 30, 75},
{0, 0.5, 0.5, 1, 6, 12, 36, 100},
{0, 0.5, 0.5, 1, 3, 6, 19, 90, 720},
{0, 0.5, 0.5, 1, 2, 4, 8, 20, 80, 1200},
{0, 0, 0.5, 1, 2, 3, 5, 10, 30, 600, 1800},
{0, 0, 0.5, 1, 1, 2, 6, 15, 25, 180, 1000, 3000},
{0, 0, 0, 0.5, 1, 2, 4, 24, 72, 250, 500, 2000, 4000},
{0, 0, 0, 0.5, 0.5, 3, 4, 5, 20, 80, 240, 500, 3000, 6000},
{0, 0, 0, 0.5, 0.5, 2, 3, 5, 12, 50, 150, 500, 1000, 2000, 7500},
{0, 0, 0, 0.5, 0.5, 1, 2, 5, 15, 50, 150, 300, 600, 1200, 2500, 10000}
};

float func::str_to_num(string bets){
    float num;
    stringstream ss;  
    ss << bets;  
    ss >> num;  
    return num;
}

void func::prt_vec(set_of_numbers_type v){ 
    for(auto i=0; i < (int)v.size(); i++) 
    cout << v[i] << " "; 

    cout << endl;
} 

template<class ForwardIt>
ForwardIt func::divide(ForwardIt right, ForwardIt left){ 
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
void func::qksort(ForwardIt right, ForwardIt left){ 
    if(right < left){ 
        ForwardIt pivot = divide(right, left); 
        qksort(right, pivot-1); 
        qksort(pivot+1, left); 
    } 
} 

void func::create_random_vec(set_of_numbers_type &v, int y, int x){
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

void func::prt_array(cash_type v[][16]){
    for (int i = 0; i < 15; i++){
        cout << i << " ";
        for (int j = 0; j < 16; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

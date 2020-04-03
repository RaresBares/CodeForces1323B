#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>


bool const isBad(std::vector<int> const &prices,std::vector<int>::iterator const &iterator){

    for(auto p = iterator+ 1; p != prices.end(); p++){

        if(*p < *iterator){

            return true;

        }

    }
    return false;
}


int const getBadDays(std::vector<int>  &prices) {

    int state = 0;

    for(auto p = prices.begin(); p != prices.end(); p++){

        if(isBad(prices, p)){

            state++;

        }

    }
    return state;
}


int main() {
    int times;
    std::cin >> times;
    std::vector<int> res;
    for (int i = 0; i < times; i++) {

        int days;
        std::cin >> days;
        std::vector<int> prices;
        for (int j = 0; j < days; j++) {
            int a;
            std:: cin >> a;
            prices.push_back(a);
        }
        std::cout << getBadDays(prices) << "\n";
        // res.push_back(getBadDays(prices));
        //  cout << getBadDays(prices) << "\n";
    }


    return 0;
}
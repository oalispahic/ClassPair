#include "pair.h"
#include <iostream>


int main() {

    auto NR = [](){std::cout<<std::endl;};
    pair combinedPair = pair("sdfjkh", 2);

    std::cout << combinedPair;
    combinedPair.modify("OPEL",0);
    NR();
    std::cout << combinedPair;
    NR();
    std::cout<<combinedPair.component();
    NR();
    std::cout<<combinedPair.component(0);
    NR();
    std::cout<<combinedPair.component(1.f)<<" Molim???";


    return 0;
}

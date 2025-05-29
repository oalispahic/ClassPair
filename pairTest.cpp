#include "pair.h"
#include <iostream>


int main() {

    auto NR = [](){std::cout<<std::endl;};
    pair combinedPair = pair("Initialised value", 2);

    std::cout << combinedPair; // should print (Initialised value, 2)

    combinedPair.modify("Modifies the value",0);
    NR();
    std::cout << combinedPair; // now prints (Modifies the value, 2)
    NR();
    std::cout<<combinedPair.component();
    NR();
    std::cout<<combinedPair.component(0);
    NR();
    std::cout<<combinedPair.component(1.f)<<" Molim???"; //still working on being able to acces each component


    return 0;
}

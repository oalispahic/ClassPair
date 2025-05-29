#include "pair.h"
#include <iostream>


int main() {

    auto NR = [](){std::cout<<std::endl;};
    pair combinedPair = pair("Initialised value", 2);

    std::cout << combinedPair; // should print (Initialised value, 2)
    pair dobarpar(1,2);
    combinedPair.modify("Modifies the value",0);
    NR();
    std::cout << combinedPair; // now prints (Modifies the value, 2)
    NR();
    std::cout<<combinedPair.component();
    NR();
    std::cout<<combinedPair.component();
    NR();
    std::cout<<combinedPair.component()<<" Molim???"; //still working on being able to acces each component
    combinedPair.modify(1,1);
    NR();
    combinedPair.component() = "Trying this "; //you can change the values of the components too
    std::cout<<combinedPair.component();
    auto flipped = combinedPair.flip(); //can flip the values but returns a new object
    std::cout<<flipped;
    pair par1(1,2);
    pair par2(1,3);
    NR();
    std::cout<<std::boolalpha<<(par1==par2); //overloaded the "==" operator



    return 0;
}

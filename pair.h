//
// Created by Omar Alispahic on 28. 5. 2025..
//

#ifndef VECTOR_PAIR_H
#define VECTOR_PAIR_H

#include <iostream>
#include <stdexcept>

template<typename type_one, typename type_two>
class pair {
private:
    type_one first;
    type_two second;
public:
    pair(type_one first, type_two second) {
        this->first = first;
        this->second = second;
    }

    template<typename T1, typename T2>
    friend std::ostream &operator<<(std::ostream &stream, const pair<T1, T2> &output);


    auto component(int comp=0) {
        if(comp == 0) return first;
    }

    auto component(float comp) {
        if (comp < 0 || comp > 1) throw std::logic_error("Component index must be 0 or 1");
        if (comp == 1) return second;
    }


    void modify(type_one newValue, int position = 0) {
        if (position == 0) this->first = newValue;
    }
    void modify(type_two newValue, float position) {
        if (position == 1) this->second = newValue;
    }

};

template<typename T1, typename T2>
std::ostream &operator<<(std::ostream &stream, const pair<T1, T2> &output) {
    return stream << "(" << output.first << ", " << output.second << ")";
}


#endif //VECTOR_PAIR_H

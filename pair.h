//*******************************************
// Created by Omar Alispahic on 28. 5. 2025..
//              ~ClassPair~
//*******************************************

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
    template<typename T1, typename T2>
    friend bool operator==(const pair<T1, T2> &firstPair, const pair<T1, T2> &secondPair);

    auto &component() {
        return first;
    }

    auto &component(int comp) {
        if (comp < 0 || comp > 1) throw std::logic_error("Component index must be '1' or empty");
        if (comp == 1) return second;
    }


    void modify(type_one newValue, int position = 0) {
        if (position == 0) this->first = newValue;
    }

    void modify(type_two newValue, float position) {
        if (position == 1) this->second = newValue;
    }


    pair<type_two, type_one> flip() {
        return pair<type_two, type_one>(second, first);
    }


};

template<typename T1, typename T2>
std::ostream &operator<<(std::ostream &stream, const pair<T1, T2> &output) {
    return stream << "(" << output.first << ", " << output.second << ")";
}

template<typename T1, typename T2>
bool operator==(const pair<T1, T2> &firstPair, const pair<T1, T2> &secondPair) {
    if (firstPair.first == secondPair.first && firstPair.second == secondPair.second) {
        return true;
    }
    return false;
}


#endif //VECTOR_PAIR_H

//
// Created by Asif on 1/21/2020.
//

#include "VectorCounter.h"

/// pushing element to vector _list
void VectorCounter::pushBack(int a) {
    for (int i = 0; i < a; ++i) {
        _list.push_back(rand()% a); /// "a" is seeding value of random.
    }
}

/// viewing private _list element
void VectorCounter::view() {
    for (int i = 0; i < _list.size(); ++i) {
        std::cout<<_list[i] << std::endl;
    }
}

/// finding the frequency of _list vector.
std::vector<int> VectorCounter::CountFrequency() {
    std::vector<int> count;
    for (int i = 0; i < _list.size(); ++i) {
        int c = _list[i];
        if (c >= count.size()){
            count.resize(c+1);
        }
        count[c] += 1;
    }
    return count;
}

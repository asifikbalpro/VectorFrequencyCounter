//
// Created by Asif on 1/21/2020.
//

#include "VectorCounter.h"

/// pushing element to vector _list
void VectorCounter::pushback(int a) {
    _list.push_back(a);
}

/// viewing private _list element
void VectorCounter::view() {
    for (int i = 0; i < _list.size(); ++i) {
        std::cout<<_list[i] << std::endl;
    }
}


std::vector<int> VectorCounter::CountFrequency() {
    std::vector<int> count;
    for (int i = 0; i < _list.size(); ++i) {
        int c = _list[i];
        if (c >= count.size()+1){
            count.resize(c+1);
        }
        count[c] += 1;
    }
    return count;
}

//
// Created by Asif on 1/21/2020.
//

#ifndef VECTORFREQUENCYCOUNTER_VECTORCOUNTER_H
#define VECTORFREQUENCYCOUNTER_VECTORCOUNTER_H

#include <iostream>
#include <vector>

class VectorCounter {
private:
    std::vector<int>_list;

public:
    void pushback(int a);
    void view();
    std::vector<int> CountFrequency();
};


#endif //VECTORFREQUENCYCOUNTER_VECTORCOUNTER_H

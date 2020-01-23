#include <iostream>
#include "src/VectorCounter.h"

int main() {
    std::cout << "Program begin !" << std::endl;

    VectorCounter VC;
    VC.pushBack(10);

    VC.view();

    std::cout<<"-------------------------" << std::endl;

    auto frequency = VC.CountFrequency();
    for (int i = 0; i < frequency.size(); ++i) {
        std::cout<< i << " =| " << frequency[i] << std::endl;
    }
    return 0;
}
#include <iostream>
#include "src/VectorCounter.h"

int main() {
    std::cout << "Program begin !" << std::endl;

    VectorCounter VC;
    VC.pushback(1);
    VC.pushback(2);
    VC.pushback(2);
    VC.pushback(3);
    VC.pushback(4);

    VC.view();

    std::cout<<"-------------------------" << std::endl;

    auto frequency = VC.CountFrequency();
    for (int i = 0; i < frequency.size(); ++i) {
        std::cout<< i << " =| " << frequency[i] << std::endl;
    }
    return 0;
}
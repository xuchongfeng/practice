#include <iostream>

namespace Test {
    void stat() {
        std::cout<<"stat"<<std::endl;
    }
}

int main() {
    Test::stat();
    return 0;
}

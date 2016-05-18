#include <iostream>

class A {
    private:
};

class B: public A {
};

class C: virtual public A {
};

int main() {
    std::cout<<sizeof(int*)<<std::endl;
    std::cout<<sizeof(A)<<std::endl;
    std::cout<<sizeof(B)<<std::endl;
    std::cout<<sizeof(C)<<std::endl;
    return 0;
}

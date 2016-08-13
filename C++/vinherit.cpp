#include <iostream>

class A {};
class B: public virtual A {};
class C: public virtual A {};
class D: public B, C {};

int main() {
    std::cout<<sizeof(A)<<std::endl;
    std::cout<<sizeof(B)<<std::endl;
    std::cout<<sizeof(C)<<std::endl;
    std::cout<<sizeof(D)<<std::endl;

    return 0;
}

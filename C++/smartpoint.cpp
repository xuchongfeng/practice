#include <iostream>

int main() {
    // shared pointer

    std::shared_ptr<int> p(new int(1));
    std::shared_ptr<int> p2 = p;

    std::cout<<p.get()<<std::endl;
    std::cout<<p2.get()<<std::endl;

    //delete p.get();

    //std::cout<<p.get()<<std::endl;
    //std::cout<<p2.get()<<std::endl;

    return 0;
}

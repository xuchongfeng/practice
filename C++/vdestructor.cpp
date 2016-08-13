#include <iostream>

class A {
public:
    virtual void print() {
        std::cout<<"A print called"<<std::endl;
    }
    virtual ~A() {
        std::cout<<"A called"<<std::endl;
    }
};


class B: public A {
public:
    void print() {
        std::cout<<"B print called"<<std::endl;
    }
    virtual ~B() {
        std::cout<<"B called"<<std::endl;
    }
};

int main() {
    A* b = new B();
    b->print();
    delete b;
    return 0;
}
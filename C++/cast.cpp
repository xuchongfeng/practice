#include <iostream>
#include <exception>

class Base {
    public:
        virtual void dummy() {}
};

class Derived: public Base {
    private:
        int value;
    public:
        Derived(int value): value(value){}
};

int main() {
    Base* p1 = new Derived(1);
    Base* p2 = new Base();

    try {
        Derived* pd;

        pd = dynamic_cast<Derived*>(p1);
        std::cout<<pd<<std::endl;

        pd = dynamic_cast<Derived*>(p2);
        std::cout<<pd<<std::endl;
    }catch(exception& e) {
        std::cout<<"Exception: "<<e.what()<<std::endl;
    }
    return 0;
}

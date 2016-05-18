#include <iostream>

void* operator new (size_t size) throw(std::bad_alloc);
void operator delete (void* ptr) throw();


void* operator new(size_t size) throw(std::bad_alloc) {
    std::cout<<"new function called"<<std::endl;
    return malloc(size);
}

void operator delete(void* ptr) throw(){
    std::cout<<"delete function called"<<std::endl;
    free(ptr);
}

class A {
    public:
        A() {
            std::cout<<"A constructor called"<<std::endl;
        }

        virtual ~A() {
            std::cout<<"A destructor called"<<std::endl;
        }
};

void test() {
    A a = *(new A());
}

int main() {
    int* p = new int(1);
    delete(p);

    A* a = new A();
    a->~A();
    delete(a);

    test();
    return 0;
}

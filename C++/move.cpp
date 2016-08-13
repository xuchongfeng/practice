#include <iostream>
#include <string>

class A {
    private:
        std::string s;
    public:
        A(): s("test"){}
        A(const A& a): s(a.s) { std::cout<<"move failed"<<std::endl; }
        A(A&& o) noexcept: s(std::move(o.s)) {}
}

A f(A a) {
    return a;
}

class B: A {
    private:
        std::string s2;
        int n;
}


class C: B {
    public:
        ~C() {}
}

class D: B {
    public:
        D(){}
        ~D(){}
        D(D&&) = default;

int main() {
    std::cout<<__cplusplus<<std::endl;

    return 0;
}

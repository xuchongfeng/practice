#include <iostream>
#include <thread>

void f1() {
}

void f2() {

}


int main() {
    std::thread t1(f1);
    std::thread t2(f2);

    std::thread t3;
    t3 = std::move(t1);
}

#include <iostream>
#include <thread>

void task() {
    for(int i = 0; i < 100; i++)
        std::cout<<"task"<<std::endl;
}

int main() {
    std::thread t(task);
    t.detach();
    return 0;
}

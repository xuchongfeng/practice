#include <iostream>
#include <thread>

int threadNum = 0;

void task() {
    std::cout<<"Do task "<<threadNum<<std::endl;
    threadNum++;
    if(threadNum < 3) {
        std::thread t(task);
        t.join();
    }
}

int main() {
    std::thread t(task);
    t.join();
    return 0;
}

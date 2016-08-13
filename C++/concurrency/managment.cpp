#include <iostream>
#include <thread>

class BackGroundTask {
    public:
        void operator()() const {
            while(1)
                std::cout<<"execute background task"<<std::endl;
        }
};

int main() {
    std::thread t((BackGroundTask()));
    //std::thread t1{(BackGroundTask())};
    //t.join();
    //t1.join();
    t.detach();
    return 0;
}

#include <iostream>
#include <thread>
#include <vector>

void hello(std::string message) {
    std::cout<<"Hello world"<<message<<std::endl;
    while(1){
        ;
    }
}

int main(int argc, char **argv) {
    if(argc < 2) {
        std::cout<<"Usage: program thread_num"<<std::endl;
        return 0;
    }
    int thread_num = std::atoi(argv[1]);
    std::vector<std::thread> threads;
    for(int i = 0; i < thread_num; i++) {
        threads.push_back(std::thread(hello, "welcome"));
    }
    for(int i = 0; i < thread_num; i++) {
        threads[i].join();
    }
    return 0;
}

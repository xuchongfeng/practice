#include <iostream>
#include <thread>

class Task {
    public:
        static int taskNum;
        Task() {
            taskNum++;
            taskIndex = taskNum;
            std::cout<<taskIndex<<" Task created"<<std::endl;
        }

        Task(const Task& t) {
            taskNum++;
            std::cout<<taskIndex<<" Copy constructor called"<<std::endl;
        }

        ~Task() {
            std::cout<<taskIndex<<" Task destructed"<<std::endl;
        }
    private:
        int taskIndex;

};

int Task::taskNum = 0;

void task(Task t) {
}

int main() {
    Task *t = new Task();
    std::thread threads(task, *t);
    threads.join();
    return 0;
}

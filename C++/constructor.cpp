#include <iostream>
#include <string>


class Parent {

    private:
        int age;
        double height;
        std::string name;

    public:
        Parent(int age, int height, std::string name): age(age), height(height), name(name) {
            std::cout<<"Parent Default Constructor Called"<<std::endl;
        }

        Parent(const Parent& parent) {
            this->age = parent.age;
            this->height = parent.height;
            this->name = parent.name;
            std::cout<<"Parent Copy Constructor Called"<<std::endl;
        }

        Parent operator=(const Parent& parent) {
            this->age = parent.age;
            this->height = parent.height;
            this->name = parent.name;
            std::cout<<"Parent Operator= Called"<<std::endl;
            return *this;
        }
};


class Toy {
    private:
        std::string brand;
    public:
        Toy(const std::string brand) {
            this->brand = brand;
            std::cout<<"Toy Constructor Called "<<brand<<std::endl;
        }
};


class Cartoon {
    private:
        std::string name;
    public:
        Cartoon(const std::string name) {
            this->name = name;
            std::cout<<"Cartoon Constructor Called "<<name<<std::endl;
        }
};


class Child: public Parent {
    private:
        Toy toy;
        Cartoon cartoon;
    public:
        Child(int age, double height, std::string name, std::string toyName): cartoon("Hello"), Parent(age, height, name), toy(toyName) {
        }
};


int main() {
    std::cout<<"####Constructor Test######"<<std::endl;
    Parent* p1 = new Parent(20, 20.0, "lucy");
    Parent p2 = *p1;
    Parent p3 = p2;
    p3 = *p1;
    std::cout<<"####Constructor Test End#####"<<std::endl;
    std::cout<<"####Constructor Called Sequence#####"<<std::endl;
    Child* c1 = new Child(20, 20.0, "lucy", "Dell");
    std::cout<<"####Constructor Called Sequence#####"<<std::endl;
    return 0;
}

#include <iostream>


//class Integer {
//    public:
//        Integer(int value): value(value){}
//        int getValue() const {
//            return value;
//        }
//        Integer& operator+(Integer op) {
//            this->value += op.value;
//            return *this;
//        }
//    private:
//        int value;
//};

class Fraction {
    public:
        explicit Fraction(int num, int den = 1): _numerator(num), _denominator(den){}
        operator double() const {
            return (double) _numerator / _denominator;
        }
//        operator Integer() const {
//            return Integer(double(*this));
//        }
    private:
        int _numerator;
        int _denominator;
};


int main() {
    Fraction* value = new Fraction(10, 5);
//    Integer* integer = new Integer(2);
    std::cout<<double(*value)<<std::endl;
    std::cout<<4.0 + *value <<std::endl;
    std::cout<<*value + 4.0 <<std::endl;
//    std::cout<<*integer + *value<<std::endl;
    return 0;
}

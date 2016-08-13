#include <iostream>


class ConstTest {
    private:
        int value;

    public:
        void change() {
            this->value = 0;
        }

        int get() const {
            return this->value;
        }
};


int main() {
    ConstTest s = *(new ConstTest());
    s.change();
    s.get();

    const ConstTest t = *(new ConstTest());
    t.change();
    t.get();

    return 0;
}

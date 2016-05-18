#include <iostream>

template<class T>
class SharedPtr {
    public:
        SharedPtr(T* ptr): _ptr(ptr), refCount(new unsigned int(1)){}
        SharedPtr(SharedPtr& ptr): _ptr(ptr->ptr), refCount(ptr->refCount) {
            (*refCount)++;
        }
        SharedPtr& operator=(SharedPtr& ptr) {
            ~SharedPtr();
            this->_ptr = ptr;
            *(ptr->refCount)++;
            this->refCount = ptr->refCount;
        }
        T& operator *(){return *_ptr;}
        T* operator ->(){return _ptr;}
        ~SharedPtr() {
            if(*refCount == 1) {
                delete(_ptr);
            }
            (*refCount)--;
        }
    private:
        T* _ptr;
        unsigned int* refCount;

};

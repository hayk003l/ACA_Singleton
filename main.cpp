#include <iostream>

class A {
public:
    static A& getObject() {
        if (_singleton == nullptr) {
            _singleton  = new A();
        }
        return *_singleton;
    }

    A(const A& obj) = delete;
    A& operator=(const A& obj) = delete;


private:
    A() {std::cout << __func__ << std::endl;}
    ~A() = default;
    A(const int& obj) = delete;

    static A* _singleton;
};

A* A::_singleton = nullptr;


int main() {

    A& obj = A::getObject();
    
    return 0;
}
#include <iostream>
#include <stdexcept>
using namespace std;
class MyException : public exception {
public:
    const char* what() const noexcept override {
        return "Custom exception occurred";
    }
};

int main() {
    try {
        throw MyException(); 
    } catch (const MyException &e) {
        cout << "Caught: " << e.what() << endl; 
    }
    return 0;
}


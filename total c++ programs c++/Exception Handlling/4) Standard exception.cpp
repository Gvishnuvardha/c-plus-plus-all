#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        throw std::runtime_error("Standard exception");
    } catch (const std::exception &e) {
        cout << "Caught: " << e.what() << endl;
    }
    return 0;
}


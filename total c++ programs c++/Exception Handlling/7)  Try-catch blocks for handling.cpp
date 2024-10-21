#include <iostream>
#include <stdexcept> 
using namespace std;

int main() {
    try {
        throw runtime_error("Basic exception");
    } catch (const runtime_error &e) {
        cout << "Caught: " << e.what() << endl;
    }
    return 0;
}


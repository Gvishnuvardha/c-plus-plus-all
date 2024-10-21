#include <iostream>
#include <stdexcept>
using namespace std;

void testFunction() {
    throw runtime_error("Exception from function");
}

int main() {
    try {
        testFunction();
    } catch (const runtime_error &e) {
        cout << "Caught: " << e.what() << endl;
    }
    return 0;
}


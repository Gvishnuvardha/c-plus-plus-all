#include <iostream>
#include <stdexcept> 
using namespace std;

int main() {
    try {
        try {
            throw runtime_error("Inner exception");
        } catch (const runtime_error &e) {
            cout << "Caught inner exception: " << e.what() << endl;
            throw; 
        }
    } catch (const runtime_error &e) {
        cout << "Caught outer exception: " << e.what() << endl;
    }
    return 0;
}


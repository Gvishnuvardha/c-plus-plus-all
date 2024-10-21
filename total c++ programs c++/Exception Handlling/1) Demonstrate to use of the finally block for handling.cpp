#include <iostream>
#include <stdexcept> 
using namespace std;
class Finally {
public:
    ~Finally() {
        cout << "Cleanup code executed (finally block)." << endl;
    }
};
int main() {
    Finally finally; 
    try {
        throw runtime_error("Exception thrown");
    } catch (const runtime_error &e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    return 0;
}


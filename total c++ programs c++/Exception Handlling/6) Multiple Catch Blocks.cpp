#include <iostream>
using namespace std;

int main() {
    try {
        throw 10; 
    } catch (int e) {
        cout << "Caught integer exception: " << e << endl;
    } catch (double e) {
        cout << "Caught double exception: " << e << endl;
    } catch (...) {
        cout << "Caught unknown exception" << endl;
    }
    return 0;
}


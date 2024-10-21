#include <iostream>
#include <string>
using namespace std;
int countElements(const string &str) {
    return str.length();
}

int main() {
    string input;
    cout<<"enter the string:";
    cin>>input;
    cout << countElements(input) << endl;
    return 0;
}


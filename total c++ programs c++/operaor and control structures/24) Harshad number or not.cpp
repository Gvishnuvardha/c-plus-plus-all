#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    
    for (int temp = n; temp > 0; temp /= 10)
        sum += temp % 10;

    if (n % sum == 0)
        cout << n << " is a Harshad number." << endl;
    else
        cout << n << " is not a Harshad number." << endl;

    return 0;
}


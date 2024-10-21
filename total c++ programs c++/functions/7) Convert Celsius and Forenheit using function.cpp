#include <iostream>
using namespace std;
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}
int main() {
    float celsius, fahrenheit;
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;

    float convertedFahrenheit = celsiusToFahrenheit(celsius);
    float convertedCelsius = fahrenheitToCelsius(fahrenheit);
    cout << "Conversion from Celsius to Fahrenheit is: " << convertedFahrenheit << endl;
    cout << "Conversion from Fahrenheit to Celsius is: " << convertedCelsius << endl;
    return 0;
}


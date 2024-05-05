//  Writing a program that creates a table of Celsius/Fahrenheit conversions between 0 and 99 degree Celsius. The conversion formula is as follows: 
// Fahrenheit = Celsius * 180.0 / 100.0 + 32

#include <iostream>
using namespace std;

int main(){
    // Declaring and Initializing variables
    int celsius = 0;
    double fahrenheit;
    cout << "Table of Celsius and Fahrenheit Conversions" << endl;
    cout << "-------------------------------------------" << endl;
    cout <<"CELSIUS" <<  " \tFAHRENHEIT" << endl;
    for(int i = celsius; i <= 99; i++){
        fahrenheit = i * 180.0 / 100.0 + 32;
        cout << i << "\t\t" << fahrenheit << endl;
    }
    return 0;
}
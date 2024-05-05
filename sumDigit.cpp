//  Writing a program that asks the user to enter a positive integer. The program then prints the sum of the digits.

#include <iostream>
using namespace std;

int main(){
    // Declaring variables
    int integer, sum = 0;
    // Prompt and output
    cout << "Enter a positive number: ";
    cin >> integer;
    // Calculating the sum of the digit
    while(integer > 0){
        // Adding the last digit to the sum
        sum += integer % 10;
        // Removing the last digit from the number
        integer /= 10;
    }
    // Displaying the result
    cout << "The sum of the digit(s)" << " = " << sum << endl;
    return 0;
}
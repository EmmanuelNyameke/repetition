//  Writing a program that asks the user to enter a positive integer. The program then prints the integer in reverse order. For example, if the user enters 359, the program prints 953.
#include <iostream>
using namespace std;
int main(){
    // Declaring variable
    int integer;
    // Prompt and Output
    cout << "Enter a positive number: ";
    cin >> integer;
    // Validation
    if (integer <= 0){
        cout << "Invalid number, please enter a positive number" << endl;
        return 0;
    }
    // Converting user input to the reversed number with loop and if-else
    int reversedNumber = 0;
    while(integer > 0){
        // Extracting rightmost digit
        int digit = integer % 10;
        // Concatenating digits in reverse order
        reversedNumber = reversedNumber * 10 + digit;
        // Removing rightmost digit from original number
        integer /= 10;
    }
    // Displaying result
    cout << "Reversed number = " << reversedNumber << endl;
    return 0;
}
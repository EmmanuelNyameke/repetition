//  Writing a program that reads a list of positive integers less than 1000 from a keyboard. The program prints the sum and the average of the numbers. The program will stop when the user types 1000 as a sentinel.


#include <iostream>
using namespace std;

int main(){
    // Declaring variables
    int integers, sum = 0, count = 0;
    double average;
    // Prompt ad Output
    cout << "Enter the list of integers less than 1000 (Enter 1000 to stop): " << endl;
    // Checking user input to perform required actions
    while(true){
        cin >> integers;
        if (integers == 1000){
            break;
        }
        else if (integers < 1 || integers >= 1000){
            cout << "Invalid input, try again!!!" << endl;
            continue;
        }
        sum += integers;
        count++;
    }
    // Calculating for the average
    average = static_cast <double> (sum) / count;
    // Displaying the result
    
    cout << "The sum of the integers without 1000 = " << sum << endl;
    cout << "The average of the integers without 1000 = " << average << endl;
    
    return 0;
}
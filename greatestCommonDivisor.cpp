//  Writing a program that finds the greatest common divisor of two integers m and n using the following algorithm: 
// a. Let m = m − n and swap m and n if m < n after subtraction. 
// b. Repeat step (a) until n is 0. The greatest common divisor is m. 

#include <iostream>
using namespace std;

int main(){
    // Declaring variables
    int m, n;
    // Prompt and output
    cout << "Enter the first integer: ";
    cin >> m;
    cout << "Enter the last integer: ";
    cin >> n;
    // Checking user input to perform the required action
    while(n != 0){
        if(m < n){
            int temp = m;
            m = n;
            n = temp;
        }
        m -= n;
    }
    // Displaying the result
    cout << "The Greatest Common Divisor(GCD) is " << m << endl; 
    return 0;
}
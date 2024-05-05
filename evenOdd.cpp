// Writing a program that asks the user to enter two positive integers. The program then prints a list of even and a list of odd numbers between the given integers.

#include <iostream>
using namespace std;
int main(){
    // Declaring variables
    int start, end;
    // Prompt and Output
    cout << "Enter the starting positive integer: ";
    cin >> start;
    cout << "Enter the ending positive integer: ";
    cin >> end;
    // Checking user input to perform required actions
    cout << "Even numbers between " << start << " and " << end << endl;
    for(int i = start; i <= end; i++){
        if (i % 2 == 0){
            cout << i << endl;
        }
    }
    cout << "Odd numbers between " << start << " and " << end << endl;
    for(int i = start; i <= end; i++){
        if(i % 2 != 0){
            cout << i << endl;
        }
    }
    return 0;
}
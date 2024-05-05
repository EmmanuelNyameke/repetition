// Writing a program that reads two integers between 1 and 100 and prints their common factors (divisors).

#include <iostream>
using namespace std;

int main(){
    // reading two integers from user
    int num1, num2;
    cout << "Enter an integer between 1 and 100: ";
    cin >> num1;
    cout << "Enter another integer between 1 and 100: ";
    cin >> num2;
    // Checking the common factors with loop and if-else
    cout << "The factors of " << num1 << endl;
    for(int i = 1; i <= 100; i++){
        if(num1 % i == 0){
            cout << i << endl;
        }
    }
    cout << "The factors of " << num2 << endl;
    for(int i = 1; i <= 100; i++){
        if (num2 % i == 0){
            cout << i << endl;
        }
    }
    cout << "The common factors of " << num1 << " and " << num2 << " are: ";
    for(int i = 1; i <= 100; i++){
        if(num1 % i == 0 && num2 % i == 0){
            cout << i << ", ";
        }
    }
    return 0;
}
// Writing a program that reads a positive integer between 1 and 100 and prints its factors (divisors). A factor is a number that divides another number. For example, the factors of 10 are 1, 2, 5, and 10. The factors of 12 are 1, 2, 3, 4, 6, and 12.

#include <iostream>
using namespace std;

int main(){
    // Reading positive integer from user
    int num;
    cout << "Enter a positive integer between 1 and 100: ";
    cin >> num;
    // Checking the factors with loop and if-else statement
    cout << "The factors of " << num << " are ";
    for(int i = 1; i <= 100; i++){
        if (num % i == 0){
            cout << i << ", ";
        }
    }
    return 0;
}
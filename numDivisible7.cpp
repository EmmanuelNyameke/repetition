// Writing a program that prints all numbers between 1 and 100 that are divisible by 7.
#include <iostream>
using namespace std;

int main (){
    // Looping through num with if-else statement
    cout << "Numbers divisible by 7 are: ";
    for(int i = 1; i <= 100; i++){
        if (i % 7 == 0){
            cout << i << ", ";
        }
    }
    return 0;
}
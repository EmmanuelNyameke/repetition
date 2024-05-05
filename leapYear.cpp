// Writing a program to display the leap years in the years 2000 to 2099
#include <iostream>
using namespace std;

int main(){
    // Declaring and initializing a variable
    int year = 2000;
    // Using for loop to display the leap years
    for(int i = year; i <= 2099; i++){
        if(i % 4 == 0 || i % 100 == 0 || i % 400 ==0){
            cout << i << " is a leap year" << endl;
        }
    }
    return 0;
}
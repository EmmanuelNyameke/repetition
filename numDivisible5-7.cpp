//  Writing a program that prints all numbers between 1 and 100 that are divisible by both 5 and 7.

#include <iostream>
using namespace std;

int main(){
    cout << "Numbers divisible by both 5 and 7 are:" << endl;
    for (int i = 1; i <= 100; i++){
        if ((i % 5 == 0) && (i % 7 == 0)){
            cout << i << endl;
        }
    }
    return 0;
}
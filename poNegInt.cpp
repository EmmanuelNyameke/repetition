// Writing a program that asks the user to enter a list of positive or negative integers using the integer 0 as the sentinel. The program then counts the number of positive and negative integers entered

#include <iostream>
using namespace std;

int main(){
    // Declaring variables
    int integers, count = 0, count1 = 0;
    // Prompt and Output
    cout << "Enter a list of positive(+) and negative(-) integers (Enter 0 to stop):" << endl;
    // Checking user input to perform required function
    while(true){
        cin >> integers;
        if (integers == 0){
            break;
        }
        else if (integers > 0){
            count++;
            continue;
        }
        else if (integers < 0){
            count1++;
        }
        else {
            cout << "Invalid input!!!" << endl;
        }
    }
    // Displaying result
    cout << "The number of positive integers = " << static_cast <int> (count) << endl;
    cout << "The number of negative integers = " << static_cast <int> (count1) << endl;
    return 0;
}
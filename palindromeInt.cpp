 // Write a program that asks the user to enter a positive integer. The program then checks to see if the number is a palindrome. A palindrome integer is an integer that is the same when the order of digits is reversed. For example, 353 and 376673 are palindromes.

 #include <iostream>
 using namespace std;

 int main(){
    // Declaring and initializing variables
    int number, reversedNum = 0;
    // Prompt and Output
    cout << "Enter a positive number: ";
    cin >> number;
    // Checking if user input is palindromes
    while(number > 0){
        int digit = number % 10;
        reversedNum = (reversedNum * 10) + digit;
        number /= 10;
        if (number) {
            cout << number << " is a palindrome" << endl;
        }
        else {
            cout << number << " is not a palindrome" << endl;
        }
    }
    return 0;
 }
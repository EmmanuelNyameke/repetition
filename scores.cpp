//  Writing a program that reads a list of scores between 0 and 100 and finds and prints the smallest and the largest scores. The program needs to ask for the number of the scores from the user; this number must be less than or equal to 10

#include <iostream>
using namespace std;

int main(){
    // Declaring variable
    int scores, numScores;
    // Initializing maximum value to smallestScore and minimum value to largestScore
    int smallestScores = 100;
    int largestScores = 0;
    // Reading numScores
    cout << "Enter the number of scores (less than or equal to 10): ";
    cin >> numScores;
    // Validation
    if (numScores > 10) {
        cout << "Number of scores cannot exceed 10." << endl;
        cout << "Exiting program................" << endl;
        return 0;
    }
    // Finding the smallest and largest scores through for-loop
    for(int i = 1; i <= numScores; i++){
        cout << "Enter scores #" << i << ": ";
        cin >> scores;
        if(scores < smallestScores){
            smallestScores = scores;
        }
        else if(scores > largestScores){
            largestScores = scores;
        }
    }
    // Displaying the result
    cout << "Smallest scores: " << smallestScores << endl;
    cout << "Largest scores: " << largestScores << endl;
    return 0;
}
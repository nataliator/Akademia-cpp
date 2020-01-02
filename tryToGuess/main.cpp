#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool isCompAnsPositive(int compAns){
    if (compAns >=0){
        return true;
    } else {
        return false;
    }
}

bool ans2OutOfNegativeRange(int ans2) {
    return (ans2!=4 && ans2!=5);
}

bool ans2OutOfPositiveRange(int ans2) {
    return (ans2!=6 && ans2!=7);
}

void guessing(int guessLimit,int compAns) {
    int guess;
    bool outOfGuesses = false;
    int guessCount = 0;

    while(compAns != guess && !outOfGuesses){
        if(guessCount < guessLimit){
            cout << "Enter guess: ";
            cin >> guess;
            if(compAns == guess){
                cout << "Bravo! Excellent choice! The number is: "<< compAns << endl;
                break;
            } else{
                guessCount++;
            }
         } else {
            outOfGuesses = true;
        }
    }

    if(outOfGuesses){
        cout << "You were really close. The number is: " << compAns << endl;
    }
}

int main(){
    int ans1;
    int ans2;
    int ans3;
    int compAns;
    int guessLimit;

    cout << "Try to guess the number I have chosen. Please make a choice. For positive numbers press 3, for negative numbers press your favorite number, but not 3 " << endl;
    cin >> ans1;

    srand( time( NULL ) );
    compAns = ((rand() % 200) -100);

    bool isUserAnsPositive = (ans1 == 3);

    if(!isUserAnsPositive && !isCompAnsPositive(compAns)) {
        cout << "Choose a range: from - 100 to - 51 press 4, or from - 50 to -1 press 5" << endl;
    } else{
        if(isUserAnsPositive && isCompAnsPositive(compAns)) {
            cout << "Choose a range: from 0 to 50 press 6, or from 51 to 100 press 7 " << endl;
        } else{
            cout << "You are already wrong, but press some number to continue " << endl;
        }

    }

    cin >> ans2;

    while((ans2OutOfNegativeRange(ans2) && !isUserAnsPositive && !isCompAnsPositive(compAns))
         ||(ans2OutOfPositiveRange(ans2) && isUserAnsPositive && isCompAnsPositive(compAns))) {
        cout << "Please read carefully, how to choose the range. Try again." << endl;
        cin >> ans2;
    };

    cout << "To choose even numbers press 6, for odd numbers press some other number " << endl;

    cin >> ans3;

    bool isUserAnsEven = ans3 == 6;
    bool isCompAnsEven = compAns % 2 ==0;


    /*There are 4 ranges:
      range 1 from -100 to -51, then ans2 = 4
      range 2 from -50 to -1, then ans2 = 5
      range 3 from 0 to 50, then ans2 = 6
      range 4 from 51 to 100, then ans2 = 7 */

    if (((ans2 == 4 && compAns <= -51)
        || (ans2 == 5 && -50 < compAns && !isCompAnsPositive(compAns))
        || (ans2 == 6 && isCompAnsPositive(compAns) && compAns <= 50)
        || (ans2 == 7 && 51 <= compAns))
        && ((isUserAnsEven && isCompAnsEven)
        || (!isUserAnsEven && !isCompAnsEven))){
            cout << "Bravo! You're doing great!Your all choices were right. Please insert number of guesses: ";
            cin >> guessLimit;
            guessing(guessLimit, compAns);
    } else{
        cout << "I am sorry, but you were wrong. The number is: " << compAns << endl;
    }

    return 0;

}

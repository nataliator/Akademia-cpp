#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;



int main()
{
    int num1;
    int num2;
    int userAns;
    srand( time( NULL ));
    num1 = 2 + (rand() % 8);
    num2 = 2 + (rand() % (num1-2));

    cout << "First number is: "<< num1 << endl;
    cout << "Second number is: "<< num2 << endl;
    cout << "Please multiply these numbers and then enter the answer: " << endl;
    cin >> userAns;
    int product = num1*num2;
    if (userAns == product){
        cout << "CORRECT" << endl;
    }else {
        cout << "INCORRECT, correct value is: " << product << endl;
    }

    int counter = 0;
    for(int i = 0; i < num2; i++){
        for(int j = 0; j < num1; j++){
            cout << setfill(' ') << setw(2) << ++counter << " ";
        }
    cout << endl;
    }

return 0;
}

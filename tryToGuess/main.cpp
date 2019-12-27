#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int ans1;
    int ans2;
    int ans3;
    int compAns;

    cout << "Try to guess the number I have chosen. Please make a choice. For positive numbers press 3, for negative numbers press your favorite number, but not 3 " << endl;
    cin >> ans1;
    srand( time( NULL ) );
    compAns = ((rand() % 200) -100);
    if ( ans1 != 3 && compAns <0 )
         cout << "Choose a range: from - 100 to - 51 press 4, or from - 50 to 0 press 5" << endl;
         else if ( (ans1 == 3) && (compAns >= 0))
            cout << "Choose a range: from 0 to 50 press 6, or from 51 to 100 press 7 " << endl;
               else
                   cout << "You are already wrong, but press some number to continue " << endl;

    cin >> ans2;

    while ((ans2!=4 && ans2!=5 && ans1!=3 && compAns<0)||(ans2!=6 && ans2!=7 && ans1==3 && compAns>=0))
      {
        cout << "Please read carefully, how to choose the range. Try again." << endl;
        cin >> ans2;

      };


    cout << "To choose even numbers press 6, for odd numbers press some other number " << endl;

    cin >> ans3;

    if (((ans2 == 4 && compAns <= -51)
        || (ans2 == 5 && -50 < compAns && compAns<= 0)
        || (ans2 == 6 && 0 < compAns && compAns <= 50)
        || (ans2 == 7 && 51 <= compAns))

        && ((ans3 == 6 && compAns % 2 ==0)
            || (ans3 != 6 && compAns % 2 != 0)))

        cout << "Bravo! Excellent choice! The number is: "<<compAns << endl;
         else
           cout << "I am sorry, but you were wrong. The number is: " << compAns << endl;

     return 0;


}

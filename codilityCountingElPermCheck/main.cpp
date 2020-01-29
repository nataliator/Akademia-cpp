#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> &A){
    int Asize = A.size();
    int permutationCheck[Asize];
    int counter = 0;
    int result = 0;

    for(int i = 0; i <= Asize;i++){
        permutationCheck[i] = 0;
    }
    for(int i = 0;i < Asize; i++){
        if(A[i] > 100000 || A[i] > Asize){
            return result;
            cout << result <<endl;
            break;
        }
        if(permutationCheck[A[i]] ==0 ){
            counter++;
        }
        permutationCheck[A[i]] = 1;
        if(counter == Asize){
            result = 1;
        }
    }
return result;
}


int main()
{
    vector<int>A ={2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    cout << solution(A) << endl;
    return 0;
}

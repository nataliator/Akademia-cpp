#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> &A){
    int wynik = 1;
    int max = *max_element(A.begin(), A.end());
    int min = *min_element(A.begin(), A.end());
    sort(A.begin(), A.end());
    for(int i = 0;i < A.size();i++){
        if(A[i] > 0){
            if (min > 1){
                return wynik;
            }
            if((A[i+1] == A[i] + 2)|| (A[i+1] > A[i]+2)){
                wynik = A[i] + 1;
                return wynik;
            }else{
                wynik = max + 1;
            }
         }else{
            i++;
         }
    }
    return wynik;
}


int main()
{
    vector<int> A = {-1000,3,6000,1,4,2,340000,5,88876};
    cout << solution(A) <<endl;
    return 0;
}

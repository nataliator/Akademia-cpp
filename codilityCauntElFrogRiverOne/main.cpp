#include <iostream>
#include <algorithm>
using namespace std;

int solution(int X, vector<int> &A){
int leafBridge[X+1];
int couter = 0;
int result = -1;

for(int i = 0; i < X+1; i++){
    leafBridge[i] = 0;
}


for(int i = 0; i < A.size(); i++){
    if (leafBridge[A[i]] == 0){
        couter++;
    }
    leafBridge[A[i]] = 1;
    if(couter == X){
        result = i;
        break;
    }
    }
    return result;
}




int main()
{
    vector<int> A = {1,3,1,4,2,3,5,4};
    cout << solution(5, A) << endl;
    return 0;
}

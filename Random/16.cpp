#include<vector>
using namespace std;
#include <iostream>

int maxSumSubarray(vector<int> &A){
    int cs = 0;
    int maz = 0;
    for(int i=0;i<A.size();i++){
        cs = cs + A[i];
        if(cs<0){
            cs = 0;
        }
        maz = max(maz,cs);
    }
    return maz;
}
int main(){
    int A[] = {1,-2,3,4,4,-2};
    
    cout << maxSumSubarray(A) << endl;

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

vector<int> swapi(vector<int> a,int x){
    a = {10,12,5,4,1,3,2};
    x = a.size();
    for(int i=0;i<x;i++){
        for(int j=i;j<x;j++){
            if(a[i] > a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    return a;
}
int main(){

}

//

#include <iostream>
#include <vector>
using namespace std;

vector<int> swapi(vector<int>& a) {
    int x = a.size();
    for (int i = 0; i < x; i++) {
        for (int j = i; j < x; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
    return a;
}

int main() {
    vector<int> a = {10, 12, 5, 4, 1, 3, 2};
    vector<int> sorted = swapi(a);
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

//
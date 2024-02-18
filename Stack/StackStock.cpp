#include<iostream>
#include<stack>
using namespace std;

void stockSpan(int price[],int n,int span[]){
    stack<int> s;
    s.push(0);

    span[0] = 1;

    // loop for the rest of the days
    for(int i=0;i<n-1;i++){
        int currPrice = price[i];

        // topmost element is higher is higher then current prices
        while(!s.empty() and price[s.top()]<=currPrice){
            s.pop();
        }
        if(!s.empty()){
            int prev_highest = s.top();
            span[i] = i-prev_highest;
        }
        else{
            span[i] = i+1;
        }
        s.push(i);
    }

}



int main(){
    int price[] = {100,80,60,70,60,75,85};
    int n = sizeof(price)/sizeof(int);
    int span[100000] = {0};
    stockSpan(price,n,span);
    for(int i=0;i<n;i++){
        cout << span[i] << endl;
    }

    return 0;
}
#include<iostream>
using namespace std;
void print(int arr[][10], int n, int m){
    int startRow = 0;
    int endrow = n-1;
    int startCol = 0;
    int endCol = m-1;

    while(startCol <= endCol and startRow <=endrow){
        for(int col = startCol; col<=endCol ; col++){
            cout << arr[startRow][col] << " ";
        }
        for(int row= startRow +1; row<=endrow;row++){
            cout << arr[row][endCol] << " "; //doubt
        }
        for(int col = endCol-1;col>=startCol;col--){
            if(startRow ==  endrow){
                break;
            }
            cout << arr[endrow][col] << " ";
        }
        for(int row = endrow-1;row>=startRow+1;row--){
            if(startCol == endCol){
                break;
            }
            cout << arr[row][startCol] << " ";
        }
        startRow++;
        endrow--;
        startCol++;
        endCol--;
    }

}

int main(){
    int arr[][10] = {{1,2,3,4},{12,13,14,5},{11,16,15,6},{10,9,8,7}};

    int n=4,m=4;
    print(arr,n,m);

    return 0;
}
#include<iostream>
#include<cmath>
using namespace std;

bool isSafe(int mat[][9],int i,int j,int no){
    // check for row and column
    for(int k=0;k<9;k++){
        if(mat[k][j]==no || mat[i][k]==no){
            return false;
        }
    }
    // check for subgrid
    int sx = (i/3)*3;
    int sy = (j/3)*3;
    for(int x=sx;x<sx+3;x++){
        for(int y=sy;y<sy+3;y++){
            if(mat[x][y]==no){
                return false;
            }
        }
    }
    return true;
}

bool solveSudoku(int mat[][9], int i,int j,int n){
    // base case
    if(i==n){
        // print the solution 
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
        return true;
    }

    // rec case
    if(j==n){
        return solveSudoku(mat,i+1,0,n);
    }

    // skipping the prefilled cell
    if(mat[i][j] != 0){
        return solveSudoku(mat,i,j+1,n);
    }

    // cell to be filled
    for(int no = 1;no<=n;no++){
        // whether it is safe to place the number or not
        if(isSafe(mat,i,j,no)){
            mat[i][j] = no;
            bool SolveSubproblem = solveSudoku(mat,i,j+1,n);
            if(SolveSubproblem==true){
                return true;
            }
        }
    }
    // if no option works
    mat[i][j] = 0;
    return false;
}

int main(){
    int n = 9;
    int mat[9][9] = 
    {{0,0,0,1,0,6,0,3,0},
    {3,9,6,0,8,0,0,0,0},
    {0,0,0,3,7,0,0,6,5},
    {0,0,0,0,6,0,7,1,2},
    {0,2,0,0,0,0,0,4,0},
    {0,6,8,0,2,0,0,9,3},
    {6,0,0,0,4,0,0,0,0},
    {0,7,0,6,3,0,0,5,0},
    {0,5,0,2,0,7,0,8,0}};

    if(!solveSudoku(mat,0,0,n)){
        cout << "No solution Exist" ;
    }


    return 0;
}
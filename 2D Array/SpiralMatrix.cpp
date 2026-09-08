#include<iostream>
using namespace std;

void spiralMatrix(int arr[][5], int n, int m){
    
    int strow = 0;
    
    int stcol = 0;
    
    int enrow = n - 1;
    
    int encol = m - 1;
    
    while(strow <= enrow && stcol <= encol){
    
        //top row
        for(int i = stcol; i <= encol; i++){
            cout << arr[strow][i] << ' ';
        }
    
        strow++;
    
        //right column
        for(int i = strow; i <= enrow; i++){
            cout << arr[i][encol] << ' ';
        }
    
        encol--;
    
        //bottom row
        for(int i = encol; i >= stcol; i--){
            cout << arr[enrow][i] << ' ';
        }
    
        enrow--;
    
        //left column
        for(int i = enrow; i >= strow; i--){
            cout << arr[i][stcol] << ' ';
        }
    
        stcol++;
        
    }

    cout << '\n';
    
}

int main(){
    
    int arr[5][5] = {   {1,2,3,4,5},
                        {16,17,18,19,6},
                        {15,24,25,20,7},
                        {14,23,22,21,8},
                        {13,12,11,10,9}
                    };

    spiralMatrix(arr, 5, 5);

    return 0;

}

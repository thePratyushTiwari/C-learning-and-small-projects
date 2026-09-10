#include<iostream>
using namespace std;

//search element in sorted Matrix;

//time - O(n+m)
void getCoordinates(int arr[][4], int n, int m, int key){
    
    int i = 0, j = m - 1;

    while(i < n && j >=0 ){
        
        if(arr[i][j] == key){
            cout << "Key found at coordinates: (" << i << ',' << j << ")\n";
            return;
        }
        else if(arr[i][j] > key){
            //come to previous column
            j--;
        }
        else{
            //go to next line
            i++;

        }

    }

    cout << "Key not found!\n";

    return;

}

int main(){
    
    int arr[][4] = {    {1,3,5,6},
                        {10,15,18,19},
                        {20,30,40,50}
                };
    
    int key;

    cout << "Search: ";
    
    cin >> key;

    getCoordinates(arr, 3, 4, key);
    
    return 0;
    
}

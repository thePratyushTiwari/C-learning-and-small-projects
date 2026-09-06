#include<iostream>
using namespace std;
//bubble sort - swap adjacent elements from the array

void bubble_sort(int *arr, int n){

    for(int i = 0; i < n-1; i++){
        bool isSwap = false;

        for(int j = 0; j < n-i-1; j++){
            if(arr[j]>arr[j+1]){
                //swapping the two values if the previous value is greater than the succeeding value
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }

        if(!isSwap) return; //list is already sorted then return;
    }

}

int main(){

    int n;

    cout << "Enter number of elements you want to put in array: ";
    
    cin >> n;
    
    int arr[n];

    //getting elements in the array
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bubble_sort(arr, n);

    //printing the sorted array
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    
    cout << '\n';

    return 0;

}

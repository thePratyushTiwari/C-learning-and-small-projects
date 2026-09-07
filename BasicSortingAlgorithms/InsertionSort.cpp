#include<iostream>
using namespace std;
//Insertion Sort - pick an element from unsorted part and place it in the sorted part at the correct index;

void insertionSort(int *arr, int n){

    for(int i = 1; i < n; i++){

        int curr=arr[i];
        
        int prev = i - 1;
        
        while(prev >= 0 && arr[prev] < curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }

        //inserting in prev+1 because the value of prev is one less than the index that we have to put in our current value;
        arr[prev+1] = curr;

    }
    
}

int main()
{

    int n;
    
    cout << "Enter the number of elements you want to put in array: ";
    
    cin >> n;

    int arr[n];

    //getting values of array
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    insertionSort(arr, n);

    //showing sorted values of array
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }

    cout << '\n';
    
    return 0;

}

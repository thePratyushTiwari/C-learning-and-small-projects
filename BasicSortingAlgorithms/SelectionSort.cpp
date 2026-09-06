#include<iostream>
using namespace std;
//selection sort - pick smallest (from unsorted part of array) & replace with current index;

void selectionSort(int *arr, int n){

    for(int i = 0; i < n-1; i++){

        int minIndex = i; //starting index of unsorted array

        //getting the index of smallest element
        for(int j = i+1; j < n; j++){

            if(arr[j] < arr[minIndex])
                minIndex = j;

        }

        swap(arr[i],arr[minIndex]); //swapping the smallest value in unsorted value and the starting value of the unsorted array

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

    selectionSort(arr, n);

    //showing sorted values of array
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }

    cout << '\n';
    
    return 0;

}

#include<iostream>
using namespace std;
//counting sort - use a frequency count for elements from min to max;

void countingSort(int *arr, int n){
    
    int minVal = INT16_MAX, maxVal = INT16_MIN;

    //taking min and max value for iterating over the range in the last step;
    for(int i = 0; i < n; i++){
        
        minVal = min(minVal, arr[i]);

        maxVal = max(maxVal, arr[i]);

    }

    int frequencyCount[maxVal+1] = {0};

    //getting index values added on the frequency count array
    for(int i = 0; i < n; i++){

        frequencyCount[arr[i]]++;

    }

    //rebuilding the previous array with ascending order of values;
    for(int i = minVal, j = 0; i <= maxVal; i++){

        while(frequencyCount[i]>0){

            arr[j++] = i;
            frequencyCount[i]--;

        }

    }

}

int main(){

    int n;

    cout << "Enter the number of elements you want in Array: ";
    
    cin >> n;
    
    int arr[n];

    //taking array elements;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    countingSort(arr, n);

    //showing sorted array;
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }

    cout << '\n';

    return 0;

}

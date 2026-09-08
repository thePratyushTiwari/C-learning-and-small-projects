#include <iostream>
using namespace std;
//remove duplicate from sorted array

int removeDuplicate(int array[], int size, int newArray[]);

int main(){

    int size;
    
    cout << "Enter length of Array: ";

    cin >> size;
    
    cout << "Enter Elements: ";
    
    int array[size];
    
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }
    
    int newArray[size];
    
    int index = removeDuplicate(array, size, newArray);
    
    cout << "New Length: " << index << "\nArray: ";
    
    for(int i = 0; i < index; i++){
        cout << newArray[i] << " ";
    }

    return 0;

}

int removeDuplicate(int array[], int size, int newArray[]){
    
    int temp;
    
    int index = 0;
    
    for(int i=0; i < size; i++){
    
        if(array[i] == temp){
            continue;
        }
    
        else{
            temp = array[i];
            newArray[index] = array[i];
            index++;
        }
    
    }
    
    return index;

}

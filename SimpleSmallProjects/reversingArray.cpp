#include <iostream>
//reverse an array

template <typename T>
void print(T array[],int size);

template <typename T>
void reverse(T array[], int size);

int main()
{

    int array[] = {1,2,3,4,5,6,7,8};

    int size = sizeof(array)/sizeof(array[0]);

    std::cout << "OG: ";

    print(array, size);

    std::cout << "Reverse: ";

    reverse(array, size);

}

template <typename T>
void print(T array[] , int size){

    for(int index= 0; index <size ; index++){

        std::cout << array[index];

        if(index == size-1){
            std::cout << '\n';
        }
        else{
            std::cout << ", ";
        }

    }

}

template <typename T>
void reverse(T array[], int size){

    T temp;

    for(int i = 0; i < ((size%2==0) ? size/2 : (size+1)/2); i++){

        temp = array[i];

        array[i] = array[size - i -1];

        array[size -i -1] = temp;

    }

    print(array, size);

}

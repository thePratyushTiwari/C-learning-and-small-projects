#include<iostream>
#include<cstring>
using namespace std;

void reverse(char *str, int n){

    int st = 0, en = n - 1;
    
    while(st < en){
        swap(str[st++],str[en--]);
    }

}

int main(){

    char str[100];

    cout << "Enter Your Word: ";

    cin.getline(str, 100, '\n');

    int n = strlen(str);

    reverse(str, n);
    
    cout << "Reverse: " << str << '\n';
    
    return 0;

}

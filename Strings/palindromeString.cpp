#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char *str, int n){

    int st = 0, en = n - 1;

    //iterates over the string and returns false if at any point finds a mis-match
    while (st < en)
    {
        if(str[st] != str[en]){
            return false;
        }
        st++;
        en--;
    }

    return true;
    
}

int main(){

    char str[100];

    cin.getline(str, 100, '\n');

    int n = strlen(str);

    cout << ((isPalindrome(str, n)) ? "Palindrome\n" : "Not palindrome\n");
    
    return 0;

}

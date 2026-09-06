#include<iostream>
using namespace std;

int main(){
  
  float num1, num2;
  
  char operation;
  
  cout << "Enter the first number: " ;
  
  cin >> num1;
  
  cout << "Enter the second number: ";
  
  cin >> num2;
  
  cout << "Enter the operation you want to perform: ";
  
  cin >> operation;
  
  switch(operation){
    
    case '+':
      cout << num1 << " + " << num2 << " = " << num1+num2 << '\n';
      break;
    
    case '-':
      cout << num1 << " - " << num2 << " = " << num1-num2 << '\n';
      break;
    
    case '*':
      cout << num1 << " x " << num2 << " = " << num1*num2 << '\n';
      break;
    
    case 'x':
      cout << num1 << " x " << num2 << " = " << num1*num2 << '\n';
      break;
    
    case '/':
      (num2==0) ? (cout << "Number cannot be divided by 0\n") : (cout << num1 << " / " << num2 << " = " << num1/num2 << '\n');
      break;
    
    default:
      cout << "Invalid Input for operator";
      break;
    
  }
  
  return 0;
  
}

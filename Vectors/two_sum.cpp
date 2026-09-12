#include<iostream>
#include<vector>
using namespace std;

//leetcode 1. Two Sum;

int main(){

    vector<int> vec1;
    
    int target;

    //getting values in vector
    do{
        int num;
        cout << "Enter number to add in vector(0 to stop): ";
        cin >> num;
        if(num==0)
            break;
        vec1.push_back(num);
    }while(true);

    //getting target value
    cout << "Enter taget value: ";
    cin >> target;

    bool isSumFound = false;
    
    int index1, index2, val1, val2;

    //ierating over the vector with two pointers to find the two values that sum up to target
    for(int i = 0; i < vec1.size() - 1; i++){
      
        for(int j = i + 1; j < vec1.size(); j++){
          
            if(vec1[i] + vec1[j] == target){
              
                isSumFound = true;
                
                index1 = i;
                
                index2 = j;
                
                val1 = vec1[i];
                
                val2 = vec1[j];
                
                break;
            
            }
        
        }
    
    }

    if(isSumFound) {
        cout << target << " is the sum of " << val1 << "(index: " << index1 << ") and " << val2 << "(index: " << index2 << ")\n";
    } else {
        cout << target << " is not found to be sum of any two values\n";
    }
  
    return 0;

}

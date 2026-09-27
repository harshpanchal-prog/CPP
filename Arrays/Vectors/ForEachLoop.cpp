#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {4,2,5,3,6,7} ;
    for(int ele : v){            //read it as "for element in v"
        cout << ele << " " ;
    }  
    // with for-each loop, we can not change the elements of the vector.
    // but with for loop , we can.
}
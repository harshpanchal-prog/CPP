#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1 ;                    //An empty vector.
    vector<int> v2(5) ;                 //A vector of size 5.{default values are 0}
    vector<int> v3(5,12) ;              //A vector of size 5.{default values are 12}
    vector<int> v4 = {4,5,6,8,2,1} ;    //A vector of size 6 with given values.
    cout << v.capacity() ;
}
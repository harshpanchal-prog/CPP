#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &v){
    for(int i=0 ; i<v.size() ; i++){
        cout << v[i] << " " ;
    }
}
int main(){
    vector<int> arr = {10,20,30,40,50,60} ;
    int i = 0 , j = arr.size()-1 ;             // for reversing only a part of array , unke indices i,j me daal do
    while(i<j){
        arr[i] = arr[i] + arr[j] ;
        arr[j] = arr[i] - arr[j] ;
        arr[i] = arr[i] - arr[j] ;
        i++ ; 
        j-- ;
    }
    print(arr) ;
    
}
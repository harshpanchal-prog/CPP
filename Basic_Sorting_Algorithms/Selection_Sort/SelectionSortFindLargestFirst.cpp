#include<iostream>
#include<vector>
using namespace std ;
void print(vector<int> &arr){
    for(int ele : arr){
        cout << ele << " " ;
    }
    cout << endl ;
}
int main(){                                                 // TC=O(n^2)
    vector<int> arr = {5,4,3,6,2,1} ;
    int n = arr.size() ;
    print(arr) ;

    for(int j=n-1 ; j>=0 ; j--){
        int mx=arr[j] , mxInd=j ;
        for(int i=0 ; i<j ; i++){
            if(arr[i]>mx){
                mx=arr[i] ;
                mxInd=i ;
            }
        }
    swap(arr[j],arr[mxInd]) ;
    }
    print(arr) ;
}
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

    for(int j=0 ; j<n-1 ; j++){
        int mn=arr[j] , mnInd=j ;
        for(int i=j ; i<n ; i++){
            if(arr[i]<mn){
                mn=arr[i] ;
                mnInd=i ;
            }
        }
    swap(arr[j],arr[mnInd]) ;
    }
    print(arr) ;
}

pinrt/(arr[i].ai{
    for(int i=0 ; i<n ; i++){
        
    }
})
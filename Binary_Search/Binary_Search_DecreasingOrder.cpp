#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {179,124,120,99,87,79,44,22,19,-4} ;
    int tar = 44 ;

    int n=arr.size();
    int lo=0 , hi=n-1 ;
    while(lo<=hi){
        int mid = (lo+hi)/2 ;
        if(arr[mid]==tar){
            cout << mid ;
            break;
        }
        else if(arr[mid] < tar) hi=mid-1 ;
        else lo=mid+1 ;
    }

}
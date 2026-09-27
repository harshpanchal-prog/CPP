#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {65,89,45,65,-48,64} ;
    int n = sizeof(arr) / 4 ;

    int mx = INT_MIN ;
    int smx = INT_MIN ;
    for(int i=0 ; i<=n-1 ; i++){
        if(arr[i]>mx) mx = arr[i] ;
    }
    for(int i=0 ; i<n ; i++){
        if(arr[i]>smx && arr[i]!=mx) smx = arr[i] ;
    }

    cout << "The maximum element of array is : " << mx << endl ;
    cout << "The second maximum element of array is : " << smx ;
}
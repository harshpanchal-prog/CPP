#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {65,89,45,65,-48,64} ;
    int n = sizeof(arr) / 4 ;

    // //M1:-
    // int mx = INT_MIN ;                   //for this , climits is used.
    // for(int i=0 ; i<=n-1 ; i++){
    //     if(arr[i]>mx) mx = arr[i] ;
    // }

    //M2:-
    int mx = arr[0] ;
    for(int i=1 ; i<=n-1 ; i++){
        if(arr[i]>mx) mx = arr[i] ;
    }


    cout << "The maximum element of array is : " << mx ;
}
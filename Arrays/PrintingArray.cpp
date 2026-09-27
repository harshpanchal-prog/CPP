#include<iostream>
using namespace std;
int main(){
    // int arr[] = {65,89,45,65,48,64} ;

    int arr[10] = {65,89,45,65,48,64} ; // extra value are set to zero by default
    
    int n = sizeof(arr) / 4 ;
    for(int i=0 ; i<=n-1 ; i++){
        cout << arr[i] << " " ;
    }
}
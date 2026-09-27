#include<iostream>
using namespace std;
int main(){
    int arr[] = {65,89,45,65,48,64} ;
    int n = sizeof(arr) / 4 ;
    int sum = 0 ;
    for(int i=0 ; i<=n-1 ; i++){
        sum += arr[i] ;
    }
    cout << "The Sum of all the Array Elements is : " << sum ;
}
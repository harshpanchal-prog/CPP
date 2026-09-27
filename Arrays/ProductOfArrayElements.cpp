#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,8,5,5,9,4} ;
    int n = sizeof(arr) / 4 ;
    int product = 1 ;
    for(int i=0 ; i<=n-1 ; i++){
        if (arr[i]==0) {
            product=0 ;
            break;
        }
        product *= arr[i] ;
    }
    cout << "The Product of all the Array Elements is : " << product ;
}
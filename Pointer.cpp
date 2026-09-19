#include<iostream>
using namespace std ;
int main(){
    int x = 7 ;
    int* ptr = &x ;          // int* ko ek alag hi datatype maan kr aage smjhne me aasani hogi.
    cout << &x << endl ;
    cout << ptr << endl ;
    cout << &ptr << endl ;
}
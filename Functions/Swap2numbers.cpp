#include<iostream>
using namespace std;
int main(){
    int a=2,b=5 ;

    // //M1:-
    // int c = a ;
    // a = b ;
    // b = c ; 

    // //M2:-
    // a = a + b ;
    // b = a - b ;
    // a = a - b ;
    
    //M3:-
    a = (a+b)-(b=a) ;

    cout << a << " " << b << endl ;
}
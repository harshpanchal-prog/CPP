#include<iostream>
using namespace std ;
int main(){
    int x = 7 ;
    int* ptr = &x ;
    cout << ptr << endl ;
    cout << *ptr << endl ;      // this * is known as dereference operator.
                                // bina datatype ke *ptr{where ptr is just a name} ka mtlb hai ptr me stored location par jakar uss value ko acces krna.
    *ptr += 70 ;       
    cout << x << endl ;
}
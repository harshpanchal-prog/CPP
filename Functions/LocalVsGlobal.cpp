#include<iostream>
using namespace std;
int x = 10 ;   //GLOBAL Variable
void fun(){
    x=45 ;
}
int main(){
    cout << x << endl ;      //10
    int x = 50 ;
    cout << x << endl ;      //50
    fun() ;                       // now global wala x is changed to 45
    cout << x << endl ;      //50
}
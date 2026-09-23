#include<iostream>
using namespace std;
int x = 10 ;   //GLOBAL Variable
void fun(){
    x=25 ;
}
int main(){
    cout << x << endl ;
    fun() ;
    cout << x << endl ;
}
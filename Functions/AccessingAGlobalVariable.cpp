#include<iostream>
using namespace std;
int x = 10 ;
int main(){
    int x=56 ;
    cout << x << endl ; //56
    cout << ::x << endl ;  //10         // Scope Resolution Operator
}
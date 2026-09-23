#include<iostream>
using namespace std;
int main(){
    int x=10 ;
    {
        int x = 16 ;
        x = 15 ;
    }
    cout << x << endl ;    //10
    {
        cout << x << endl ;     //10
        x=25 ;
    }
    cout << x << endl ;        //25
     {
        int x = 21 ;
        x += 10 ;
        cout << x << endl ;       //31
     }
    cout << x << endl ;      //25
}
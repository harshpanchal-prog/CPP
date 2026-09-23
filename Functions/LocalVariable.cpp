#include<iostream>
using namespace std;


// void fun(){
//     cout << x ;    // error    bcoz fun() ko pata hi nhi ki x kon hai.
// }
// int main(){
//     int x = 10 ;            // bcoz x is a local variable of main()
//     fun() ;
// }

void fun(){
    int x = 10 ;
}
int main(){
    fun() ;
    cout << x ;     //error      bcoz similarly fun() ke local variable ka main() ko nhi pata hai ki ye kon hai. 
}
#include<iostream>
using namespace std;
void fun(int n){
    cout << n << endl ;
    if(n>20) return ;                         //return function ko khatam{break} kar deta hai.
    cout << n*n << endl ;
}
int main(){
    fun(27) ;
}
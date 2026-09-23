#include<iostream>
using namespace std;
void fun(char x){         
    cout << "Character" << endl ;
}
void fun(int x){
    cout << "Integer" << endl ;
}
void fun(double x ){
    cout << "Double" << endl ;
}
int main(){
    fun('H') ;
    fun(5) ;
    fun(7.0);
}
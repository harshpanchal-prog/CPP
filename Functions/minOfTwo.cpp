#include<iostream>
using namespace std ;
void minOfTwo(int a, int b){
    if(a<=b) cout << a <<" is smaller." ;
    else cout << b <<" is smaller." ;
}
int main(){
    int x,y ;
    cout << "Enter 2 numbers : " ;
    cin >> x >> y ;
    minOfTwo(x,y) ;
}
#include<iostream>
using namespace std ;
int product(int a , int b){
    return a*b ;
}
int main(){
    cout << product(4,11) ;
    return 0 ;                  // aaj kal ke compiler me return 0 ki jrurat nhi hai . vrna phle to likhna jruri hota tha.
}
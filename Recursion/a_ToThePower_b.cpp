#include<iostream>
using namespace std;

// int power(int a , int b){
//     if(b==0) return 1 ;
//     int ans = a * power(a,b-1) ;
//     return ans ;
// }

int power(int a , int b){                          // For better TC
    if(b==0) return 1 ;
    int p = power(a,b/2) ;
    return (b%2==0) ?  (p*p) : (a*p*p) ;
}
int main(){
    int a,b ;
    cout << "Enter base and power : " ;
    cin >> a >> b ;
    cout << power(a,b) << endl ;
} 
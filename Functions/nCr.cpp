#include<iostream>
using namespace std;
int fact(int n){
    int ans = 1 ;
    for(int i=1 ; i<=n ; i++){
        ans *= i ;
    }
    return ans ;
}
int main(){
    int n,r ;
    cout << "Enter n , r : " ;
    cin >> n >> r ;
    int nCr ;
    nCr = fact(n)/(fact(r)*fact(n-r)) ;
    if(n==0 && r!=0) cout << "Not defined" ;
    else cout << "nCr is : " << nCr ;
}
//Elements of Pascal's Triangle are nothing but iCj where both i and j starts from 0.

#include<iostream>
using namespace std;
int fact(int n){
    int fac = 1 ;
    for(int i=1 ; i<=n ; i++){
        fac *= i ;
    }
    return fac ;
}
int nCr(int n , int r){
    return ( fact(n)/(fact(r)*fact(n-r)) ) ;
}

int main(){
    int n ;
    cout << "Enter n : " ;
    cin >> n ;


    for(int i=0 ; i<=n ; i++){
        for(int j=1 ; j<=(n-i) ; j++){        //for initial spaces
            cout << " " ;
        }
        for(int j=0 ; j<=i ; j++){
            cout << nCr(i,j) << " " ;
        }
        cout << endl ;
    }
}


/*
FOR n=4 :-
    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1
*/
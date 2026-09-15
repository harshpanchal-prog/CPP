#include<iostream>
using namespace std ;
int main(){
    int m,n ;
    cout << "Enter the number : " ;
    cin >> m ;\
    n = m-1 ;                                      // bcoz of the given value of input in given diagram .
    for(int i=1 ; i<=(2*n+1) ; i++){
        cout << "* " ;
    }
    cout << endl ;
    int nsp = 1 ;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=(n-i+1) ; j++){
            cout << "* " ;
        }                                         //M2 for this loop:-
        for(int j=1 ; j<=nsp ; j++){              //for(int j=1 ; j<=(2*i-1) ; j++){
            cout << "  " ;                        //    cout << "  " ;
        }                                         //}
        for(int j=1 ; j<=(n-i+1) ; j++){
            cout << "* " ;
        }
        nsp += 2 ;                                //upar wala method use kre to nsp+=2 ki jrurat hi nhi hai.
        cout << endl ;

    }
}


/*
FOR input=5:-

* * * * * * * * * 
* * * *   * * * * 
* * *       * * * 
* *           * * 
*               * 

*/
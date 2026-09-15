#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Enter the number : " ;
    cin >> n ;
    // M1:-
    // for(int i=1 ; i<=n ; i++){
    //     for(int j=1 ; j<=(i-1) ; j++){
    //         cout << "  " ;
    //     }
    //     for(int j=1 ; j<=(2*(n-i+1)-1) ; j++){
    //         cout << "* " ;
    //     }
    //     cout << endl ;
    // }

    //M2:- {nsp,nst}
    int nsp = 0 , nst =2*n-1 ;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=nsp ; j++){
            cout << "  " ;
        }
        for(int j=1 ; j<=nst ; j++){
            cout << "* " ;
        }
        nsp++ ;
        nst -= 2 ;
        cout << endl ;
    }
}
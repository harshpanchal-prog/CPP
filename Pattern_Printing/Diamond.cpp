#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Enter the number : " ;
    cin >> n ;
    //M1:-
    // for(int i=1 ; i<=n-1 ; i++){
    //     for(int j=1 ; j<=(n-i) ; j++){
    //         cout << "  " ;
    //     }
    //     for(int j=1 ; j<=(2*i-1) ; j++){
    //         cout << "* " ;
    //     }
    //     cout << endl ;
    // }
    // for(int i=1 ; i<=n ; i++){
    //     for(int j=1 ; j<=(i-1) ; j++){
    //         cout << "  " ;
    //     }
    //     for(int j=1 ; j<=(2*(n-i+1)-1) ; j++){
    //         cout << "* " ;
    //     }
    //     cout << endl ;
    // }

    //M2:-
    // int nsp = n-1 , nst =1 ;
    // for(int i=1 ; i<=n ; i++){
    //     for(int j=1 ; j<=nsp ; j++){
    //         cout << "  " ;
    //     }
    //     for(int j=1 ; j<=nst ; j++){
    //         cout << "* " ;
    //     }
    //     nsp-- ;
    //     nst += 2 ;
    //     cout << endl ;
    // }
    // nsp = 1 ;
    // nst =2*n-3 ;
    // for(int i=1 ; i<=n ; i++){
    //     for(int j=1 ; j<=nsp ; j++){
    //         cout << "  " ;
    //     }
    //     for(int j=1 ; j<=nst ; j++){
    //         cout << "* " ;
    //     }
    //     nsp++ ;
    //     nst -= 2 ;
    //     cout << endl ;
    // }

    //M3:-
    int nsp = n-1 , nst =1 ;
    for(int i=1 ; i<=2*n-1 ; i++){
        for(int j=1 ; j<=nsp ; j++){
            cout << "  " ;
        }
        for(int j=1 ; j<=nst ; j++){
            cout << "* " ;
        }
        if(i<n){
            nsp-- ;
            nst += 2 ;
        }
        else {
            nsp++ ;
            nst -= 2 ;
        }
        cout << endl ;
    }
}
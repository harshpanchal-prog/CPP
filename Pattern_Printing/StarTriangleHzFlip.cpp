#include<iostream>
using namespace std ;
int main(){
    cout << "Enter the number : " ;
    int n ;
    cin >> n ;
    // M1:-
    // for(int i=1 ; i<=n ; i++){
    //     for(int j=1 ; j<=(n-i+1) ;j++){
    //         cout << "* " ;
    //     }
    //     cout << endl ;
    // }

    //M2:-
    // for(int i=n ; i>=1 ; i--){
    //     for(int j=1 ; j<=i ;j++){
    //         cout << "* " ;
    //     }
    //     cout << endl ;
    // }

    //M3:-
    int a=n ;
    for(int i=n ; i>=1 ; i--){
        for(int j=1 ; j<=a ;j++){
            cout << "* " ;
        }
        a--;
        cout << endl ;
    }
}

/*
* * * * * 
* * * * 
* * * 
* * 
* 
*/
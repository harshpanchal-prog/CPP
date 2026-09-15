#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Enter the number : " ;
    cin >> n ;
    
    // M1:-
    // for(int i=65 ; i<=(65+n-1) ; i++ ){
    //     for(int j=65 ; j<=(65+n-1) ; j++){
    //         cout << char(j) << " ";
    //     }
    //     cout << endl ;
    // }

    //M2:-
    for(int i=1 ; i<=n ; i++ ){
        for(int j=1 ; j<=n ; j++){
            cout << char(j+64) << " ";
        }
        cout << endl ;
    }

}

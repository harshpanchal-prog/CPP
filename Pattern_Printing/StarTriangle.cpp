/*

* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 

*/



#include<iostream>
using namespace std ;
int main(){
    cout << "Enter the number : " ;
    int n ;
    cin >> n ;
    
    //M1:-
    // for(int i=1 ; i<=n ;i++){
    //     for(int j=1 ; j<=n ; j++){
    //         if(i>=j) cout << "* " ;
    //     }
    //     cout << endl ;
    // }

    //M2:-
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){              //j<=n wali condition me n ki jagah i kar diya {in StarRectangle.cpp}
            cout << "* " ;
        }
        cout << endl ;
    }   
}
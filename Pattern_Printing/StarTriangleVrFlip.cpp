#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Enter the number : " ;
    cin >> n ;

    //M1:- 

    // for(int i=1 ; i<=n ; i++){
    //     for(int j=1 ; j<=n ;j++){
    //         if( (i+j)<=n ) cout << "  " << " " ;
    //         else cout << "* " << " " ;
    //     }
    //     cout << endl ;
    // }

    //M2:-

    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n-i ; j++){              // n-1+1 ki jagah n-i hi krna hai yaha
            cout << "  " << " " ;
        }
        for(int j=1 ; j<=i ; j++){
            cout << "* " << " " ;
        }
        cout << endl ;
    }
}

/*
               *  
            *  *  
         *  *  *  
      *  *  *  *  
   *  *  *  *  *  
*  *  *  *  *  *  

*/
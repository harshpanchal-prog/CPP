#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Enter the number : " ;
    cin >> n ;
    
    //M1:-
    // for(int i=1 ; i<=n ; i++){
    //     for(int j=1 ; j<=n ; j++){
    //         cout << min(i,j) << " " ;
    //     }
    //     for(int j=n-1 ; j>=1 ; j--){
    //         cout << min(i,j) << " " ;
    //     }
    //     cout << endl ;
    // }
    // for(int i=n-1 ; i>=1 ; i--){
    //     for(int j=1 ; j<=n ; j++){
    //         cout << min(i,j) << " " ;
    //     }
    //     for(int j=n-1 ; j>=1 ; j--){
    //         cout << min(i,j) << " " ;
    //     }
    //     cout << endl ;
    // }

    //M2:-
    for(int i=1 ; i<=(2*n-1) ; i++){
        for(int j=1 ; j<=(2*n-1) ; j++){
            int a=i , b=j ;
            if(i>n) a=(2*n-i) ;
            if(j>n) a=(2*n-j) ;
            cout << min(a,b) << " " ;
        }
        cout << endl ;
    }
}

/*
FOR input=5:-
1 1 1 1 1 1 1 1 1 
1 2 2 2 2 2 2 2 1 
1 2 3 3 3 3 3 2 1 
1 2 3 4 4 4 3 2 1 
1 2 3 4 5 4 3 2 1 
1 2 3 4 4 4 3 2 1 
1 2 3 3 3 3 3 2 1 
1 2 2 2 2 2 2 2 1 
1 1 1 1 1 1 1 1 1 

*/
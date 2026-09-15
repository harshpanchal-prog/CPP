#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Enter the number : " ;
    cin >> n ;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n ; j++){
            if(i<=j) cout << i << " " ;   //M2:-{for both these lines of if-else}
            else cout << j << " " ;       //  cout << min(i,j) << " " ;
        }
        cout << endl ;
    }
}


/*
1 1 1 1 
1 2 2 2 
1 2 3 3 
1 2 3 4 
*/
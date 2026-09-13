//2,5,8,11,14,17,...

#include<iostream>
using namespace std;
int main(){


    int a,d,n ;

    cout << "Enter first term : " ;  //2
    cin >> a ;

    cout << "Enter common difference : " ;  //3
    cin >> d ;
    
    cout << "Enter number of terms : " ;  
    cin >> n ;

    //M1:-

    //int an;
    // an = a + (n-1)*d ;
    // for(int i=a ; i<=an ; i+=d){
    //     cout << i << " " ;
    // }


    //M2:- 
    
    for (int i=1 ; i<=n ; i++){
        cout << a << " " ;
        a += d ;
    }


}
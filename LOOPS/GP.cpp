//1,2,4,8,16,32,...

#include<iostream>
using namespace std;
int main(){


    int a,r,n ;

    cout << "Enter first term : " ;  //2
    cin >> a ;

    cout << "Enter common ratio : " ;  //3
    cin >> r ;
    
    cout << "Enter number of terms : " ;  
    cin >> n ;
 
    
    for (int i=1 ; i<=n ; i++){
        cout << a << " " ;
        a *= r ;
    }


}
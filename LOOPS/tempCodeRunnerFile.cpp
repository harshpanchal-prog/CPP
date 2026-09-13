#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n ;
    cout << "Enter a number : " ;
    cin >> n ;
    
    //Bad Method :-  {bade number ke liye loop ki iterations bahut hi jyada hogi isme}

    // for (int i=1 ; i<=n ; i++){
    //     if (n%i == 0) cout << i << " " ;
    // }

    //Good Method:-  {loop ki iterations bahut kam ho jayengi}

    for (int i=1 ; i<=sqrt(n) ; i++){
        if (n%i == 0) {
            cout << i << " " ;
            if( i != n/i) cout << n/i << " " ;
        }
    }

}
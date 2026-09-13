#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n ;
    cout << "Enter a number : " ;
    cin >> n ;

    int count = 0 ;
    for (int i=1 ; i<=sqrt(n) ; i++){
        if (n%i == 0) {
            count++ ;
            if( i != n/i) {     //bcz 'i' agar 'n' ka factor hai to 'n/i' bhi 'n' ka factor hota hai.
                count++ ;
            }
        }
        if (count>=3) break ;   //it decreases the iterations of loop
    }
    if (n == 1) cout << "Neither PRIME nor COMPOSITE" ;
    else if (count>2) cout << "COMPOSITE NUMBER" ;
    else cout << "PRIME NUMBER" ;

}
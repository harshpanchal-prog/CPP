#include<iostream>
using namespace std ;
int main(){
    cout << "Enter the Number : " ;
    int n ;
    cin >> n ;
    long long fact=1 ;
    if (n<0) cout << "Factorial of negative number not defined." ;
    else {
        for(int i=n ; i>=1 ; i--){
            fact *= i ;
        }
    }
    if(n>=0) cout << "Factorial of given number is : " << fact ;
} 
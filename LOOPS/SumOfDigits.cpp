#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Enter a number : " ;
    cin >> n ;
    if (n<0) n = -n ;
    int sum = 0 ;
    while (n!=0){
        int lastdigit = n%10 ;
        sum += lastdigit ;
        n /= 10 ;
    }
    cout << "Sum of digits of given number is : " << sum ;
}  
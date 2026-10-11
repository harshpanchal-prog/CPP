#include<iostream>
#include<string>
using namespace std;
int main(){
    int n ;
    cout << "Enter the number : " ;
    cin >> n ;

    // string s ;
    // while(n!=0){
    //     int ld = n%10 ;
    //     char ch = ld + 48 ;
    //     s.push_back(ch) ;
    //     n /= 10 ;
    // }

    // int i=0 , j=s.length()-1 ;
    // while(i<j){
    //     swap(s[i],s[j]) ;
    //     i++ ;
    //     j-- ;
    // }
    // cout << s << endl ;

    //M2:-                      //{Built-in Function}
    string s = to_string(n) ;           // TC=O(length of string)
    cout << s << endl ;
}
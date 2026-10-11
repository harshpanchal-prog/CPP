#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Harsh Panchal" ;
    cout << s.size() << endl ;
    cout << s.length() << endl ;
    cout << s[1] <<endl ;

    // We can also change individual character of string :-

    s[0] = 'P' ;
    cout << s << endl ;
}
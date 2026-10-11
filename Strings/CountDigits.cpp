#include<iostream>
#include<string>
using namespace std;
int main(){
    int n ;
    cout << "Enter the number : " ;
    cin >> n ;
    
    string s = to_string(abs(n)) ;
    cout << s.length() << endl ;
}
#include<iostream>
#include<string>
using namespace std;
int main(){
    // char x = {'H','a','r','s','h'} ;    // it is very time taking.
    string x = "Harsh" ;                  // So, we use this method.
    cout << x << endl ;

    //Taking input:-
     string s ;
     cout<<"Enter any string : " ;
    //  cin >> s ;                 // It will take only first word as input.
    getline(cin,s) ;              //So,we use it.
     cout << s ;
}
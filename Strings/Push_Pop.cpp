#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "Harsh" ;
    s.pop_back() ;
    s.push_back('P') ;
    cout << s << endl ;

    // sort(s.begin(),s.end()) ;
    // reverse(s.begin(),s.end()) ;
    reverse(s.begin()+1,s.end()-1) ;
    cout << s << endl ;
}
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s = "aaaazzcccdaa" ;
    string ans ;
    int n = s.length() ;
    int i=0,j=0 ;
    while(j<n){
        if(s[j]==s[i]) j++ ;
        else{
            int num=j-i ;
            ans.push_back(s[i]);
            ans.push_back((char)(num+48)) ;
            i=j ;
        }
    }

    int num=j-i ;
    ans.push_back(s[i]);
    ans.push_back((char)(num+48)) ;

    cout << ans << endl ; 
}
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s = "Harsh is my name" ;
    int n = s.length() ;
    int i=0,j=0 ;
    while(j<n){
        if(s[j]!=' ') j++ ;
        else{
            int x=i,y=j-1 ;
            while(x<y){
                swap(s[x],s[y]) ;
                x++ ;
                y-- ;
            }
            while(s[j]==' ' && j<n) j++ ;
            i=j ;
        }
    }

    int x=i,y=j-1 ;
    while(x<y){
        swap(s[x],s[y]) ;
        x++ ;
        y-- ;
    }

    cout << s << endl ;
    reverse(s.begin(),s.end()) ;
    cout << s << endl ;
}
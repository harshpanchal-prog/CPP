#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s ;
    cout << "Enter the text : " ;
    getline(cin,s) ;
    int v=0 ;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') v++ ;
    }
    cout << "Total Vowels : " << v << endl ;
}
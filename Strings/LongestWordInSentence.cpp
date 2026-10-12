#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s = "Harsh is    the smartest boy" ;
    int n = s.length() ;
    int i=0,j=0 ;
    int mxlen = 0 ;
    string ans ;
    while(j<n){
        if(s[j]!=' ') j++ ;
        else{
            int len = j-i ;
            if(len > mxlen){
                 mxlen=len ;
                 ans=s.substr(i,len) ;
            }
            while(j<n && s[j]==' ') j++ ;        // bcz beech me multiple spaces bhi to ho skte hai.
            i=j ;
        }
    }

    int len = j-i ;                  // ye 5 lines loop se bahar dobara isiliye likhi taki agar original sentence me last me ' '{space} nhi hua to apni upar wali loop last word ko claculate nhi kr payegi
    if(len > mxlen){
        mxlen=len ;
        ans=s.substr(i,len) ;
    }

    cout << mxlen << " " << ans << endl ;
}
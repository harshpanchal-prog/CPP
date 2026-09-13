#include<iostream>
using namespace std;
int main(){
    int A = 'A' ;
    for(int i=1 ; i<=26 ; i++){
        cout << (char)A << " " << A << endl ;
        A += 1 ;
    }
}
#include<iostream>
using namespace std;
int main(){
    cout << "Enter a number : " ;
    int n ;
    cin >> n ;
    for (int i=10 ; i>=1 ; i--){
        cout << n*i << " " ;
    }
}
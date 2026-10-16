#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return ;
    cout << n << " " ;
    print(n-1) ;
    if(n==1) return ;       // agar ye line nhi hoti to output hota : 4 3 2 1 1 2 3 4 
    cout << n << " " ;
}
int main(){
    int n;
    cout << "Enter the value of n : " ;
    cin >> n ;
    print(n);
} 
#include<iostream>
using namespace std;
int n;    // global variable
void print(int x){
    if(x>n) return ;
    cout << x << " " ;
    print(x+1) ;
}
int main(){
    cout << "Enter the value of n : " ;
    cin >> n ;
    print(1);
} 
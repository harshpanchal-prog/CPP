#include<iostream>
using namespace std;
void harsh(int n){
    cout << "Harsh" << endl ;      // 4 baar print hoga
    if(n==0) return ;
    // cout << "Harsh" << endl ;   // 3 baar print hoga
    harsh(n-1) ; 
} 
int main(){
    harsh(3);
}
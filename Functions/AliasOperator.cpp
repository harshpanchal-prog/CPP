#include<iostream>
using namespace std;
void swap(int& a , int& b){     // ALIAS Operator { int& 
    
                                // agar yaha sirf int a , int b likhte to main() me a,b ki values swap nhi hoti
                                // bcoz swap() ke a,b are local to this function only.
    int c = a ;
    a = b ;
    b = c ; 
} 

int main(){
    int a=2,b=5 ;
    swap(a,b) ;
    cout << a << " " << b << endl ;
}
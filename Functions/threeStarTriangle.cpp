//WAP to print 3 star triangles by taking 3 numbers as input.

#include<iostream>
using namespace std ;
void starTriangle(int n){
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            cout << "* " ;
        }
        cout << endl ;
    }
}
int main(){
    int x,y,z ;
    cout << "Enter 3 numbers : " ;
    cin >> x >> y >> z ;
    starTriangle(x) ;
    starTriangle(y) ;
    starTriangle(z) ;
}
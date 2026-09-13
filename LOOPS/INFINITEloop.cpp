#include<iostream>
using namespace std ;
int main(){
    int i ;
    while(i=10){                          //an INFINITE loop bcz i=10 koi condition nhi hai
        cout << i << endl ;               //blki baar baar hum i me 10 daal rhe hai => condition 
        i++ ;                             //                                           always true
    }
}
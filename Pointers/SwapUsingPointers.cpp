#include<iostream>
using namespace std;
void swap(int* a , int* b){
    // int c = *a ;
    // *a = *b ;
    // *b = c ;

    *a = *a + *b ;
    *b = *a - *b ;
    *a = *a - *b ;
}
int main(){
    int a = 5 , b = 2 ;
    swap(&a,&b) ;
    cout << a << "  " << b << endl ;
}  
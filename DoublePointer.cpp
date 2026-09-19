#include<iostream>
using namespace std;
int main(){
    // int* p1 ;
    // int* p2 ;
    // p1 = &p2 ;          //ERROR bcoz p1 (aur p2 bhi) sirf kisi integer ka hi address store kr skta hai bcoz of the " int* "

    // Double Pointer is used to store address of a single pointer :-

    int x = 10 ;
    int* p1 = &x ;
    int** p2 =&p1 ;
    cout << &x << endl ;
    cout << p1 << endl ;
    cout << &p1 << endl ;
    cout << p2 << endl ;

}  
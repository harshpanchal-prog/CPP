#include<iostream>
using namespace std;
int main(){
    int marks[] = {65,89,45,65,48,64} ;     // if we use float in place of int ,then, we have to store only float value as its elements.
    cout << marks << endl ;
    cout << marks[2] << endl ;
    marks[2] = 97 ;
    cout << marks[2] << endl ;
    cout << "Enter new element for third place of array : " ;
    cin >> marks[2] ;
    cout << marks[2] ;
}
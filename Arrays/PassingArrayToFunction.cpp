#include<iostream>
using namespace std;
void change(int x[]){
    x[0] = 20 ;
}
int main(){ 
    int arr[] = {65,89,45,65,-48,64} ;
    cout << arr[0] << endl;
    change(arr) ;
    cout << arr[0] ;
}
#include<iostream>
using namespace std;
int main(){
    int marks[] = {65,89,45,65,48,64} ;
    // cout << size(marks) << endl ;     // gives error in old C++

    cout << sizeof(marks) << endl ;  // it will give 24 bcoz sizeof gives the total bytes {and our array has 6 int => 24 bytes{6*4}}

    cout << "Total no. of Elements in our array is : " << sizeof(marks)/sizeof(int) ;   //bcoz size of int => 4 bytes
}
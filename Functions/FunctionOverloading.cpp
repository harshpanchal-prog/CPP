#include<iostream>
using namespace std;
void fun(){         
    cout << "Without Variables" << endl ;                    //pahla
}
void fun(int x){
    cout << "With one Variable" << endl ;
}
void fun(int x , int y){
    cout << "With two Variables" << endl ;
}

// void fun(int x=10){
//     cout << "With Default Variable" << endl ;                 //aakhri
// }
int main(){
    fun() ;      // this will give error{agar aakhri ko comment na kiya jae to} bcoz bina variable ke to 
                 // pahla aur aur aakhri dono functions chal skte hai
    fun(5) ;
    fun(6,7) ;
}
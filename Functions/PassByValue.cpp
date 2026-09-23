#include<iostream>
using namespace std;
void change(int x){
    x=20 ;               
}
int main(){
    int x = 10 ;
    change(x) ;
    cout << x << endl ;      //10   bcoz change ke andar ke variable(i.e., its parameter) ki value change hui hai , main ke variable ki nhi.
                             // think it as : agar void ke andar ke variable ka naam hum kuchh aur le lete{jaise a,b,c} too . 
}
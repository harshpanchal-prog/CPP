#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s = "HarshPanchal" ;
    cout << s.substr(0,4) << endl ;     // 0 se suru , 4 length ki string
    cout << s.substr(2,4) << endl ;     // 2 se suru , 4 length ki string
    cout << s.substr(3) << endl ;       // 3 se suru , last tak
    
}
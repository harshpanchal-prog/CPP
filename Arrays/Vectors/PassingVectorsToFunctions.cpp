#include <iostream>
#include <vector>
using namespace std;
// void change(vector<int> v){            // pass by value {asli vector me kuchh change nhi hoga}
//     v[2] = 90;
// }
void change(vector<int> &v){              // pass by reference {asli vector me change hoga}
    v[2] = 90;
}
int main(){
    vector<int> v = {4,5,3,8,2,1} ;
    change(v) ;
    cout << v[2] ;
}
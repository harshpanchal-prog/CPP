#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(7) ;
    cout << v.size() << "  " << v.capacity() << endl ;
    v.push_back(5) ;
    cout << v.size() << "  " << v.capacity() << endl ;

    //Capacity se jyada size hote hi capacity double ho jati hai

}

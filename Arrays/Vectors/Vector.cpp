#include<iostream>
#include<vector>
using namespace std;
int main(){

    // vector<int> arr(5) ;   //created a vector of size 5 and default values are zero.
    // for(int i=0 ; i<5 ; i++){
    //     cout << arr[i] << "  " ;
    // }

    vector<int> arr(5,18) ;   //created a vector of size 5 and whose elements default values are 18

    for(int i=0 ; i<arr.size() ; i++){     // arr.size() gives size of vector
        cout << arr[i] << "  " ;
    }

    cout << endl ;
    cout << arr.capacity() ;
    cout << endl ;
    
    //Adding and Removing elements in vector:-
    
    arr.push_back(13) ;    //adds the element at end
    arr.push_back(14) ; 
    arr.pop_back() ;       //removes the last element
    arr.push_back(15) ;
    for(int i=0 ; i<arr.size() ; i++){
        cout << arr[i] << "  " ;
    }
    cout << endl;
    cout << arr.capacity() ; //capacity naya element{old capacity se jyada} aate hi double ho jati hai
}
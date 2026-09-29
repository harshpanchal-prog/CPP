#include<iostream>
using namespace std ;
int main(){
    //int arr[3][4] ;
    int arr[][4] = {{5,3,1,4},{9,9,6,6},{9,0,4,3}} ;
    
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ; j++){
            cout << arr[i][j] << " " ;
        }
        cout << endl ;
    }

    // for(int j=0 ; j<4 ; j++){
    //     for(int i=0 ; i<3 ; i++){
    //         cout << arr[i][j] << " " ;
    //     }
    //     cout << endl ;
    // }
}
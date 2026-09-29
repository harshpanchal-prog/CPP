#include<iostream>
#include<climits>
using namespace std ;
int main(){
    //int arr[3][4] ;
    int arr[][4] = {{5,3,1,4},{9,9,6,6},{9,0,4,3}} ;
    int smx = INT_MIN ;
    int rmx ;
    for(int i=0 ; i<3 ; i++){
        int sum = 0 ;
        for(int j=0 ; j<4 ; j++){
            sum += arr[i][j] ;
        }
        if(sum > smx){
            smx = sum ;
            rmx = i ;
        } 
    }
    cout << rmx << " " << smx ;
}
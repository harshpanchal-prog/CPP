#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {65,89,45,65,48,64} ;
    int n = sizeof(arr) / 4 ;
    int target = 48 ;
    bool flag = false ;
    for(int i=0 ; i<n ; i++){
        if (arr[i]==target){
            flag = true ;
            break ; 
        }
    }
    (flag == true) ? cout << "Element Found." : cout << "Element Not Found." ;
}
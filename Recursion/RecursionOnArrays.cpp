#include<iostream>
#include<vector>
using namespace std;
void printRec(vector<int>& arr , int ind){
    if(ind==arr.size()) return ;
    cout << arr[ind] << " " ;
    printRec(arr,ind+1) ; 
}
int main(){
    vector<int> arr = {5,8,2,534,8,235,-8521} ;
    printRec(arr,0) ;
} 
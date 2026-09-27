#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {4,2,5,3,6,7} ;

    // reverse(v.begin(),v.end()) ;       // 7 6 3 5 2 4 {Reverse}
    // for(int ele : v) cout << ele << " " ;

    // reverse(v.begin()+1,v.end()) ;     // 4 7 6 3 5 2 {Reversing a part{after 4} of vector}
    // for(int ele : v) cout << ele << " " ;

    // sort(v.begin(),v.end()) ;          // 2 3 4 5 6 7  {Sorting in ascending order}
    // for(int ele : v) cout << ele << " " ;

    sort(v.begin()+1,v.end()) ;           // 4 2 3 5 6 7  {Sorting a part{after 4} in ascending order}
    for(int ele : v) cout << ele << " " ;
    
}
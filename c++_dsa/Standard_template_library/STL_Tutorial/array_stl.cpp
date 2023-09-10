#include<bits/stdc++.h>
using namespace std;
void print_array(array<int,5>& array){
    for(int i=0;i<array.size();i++){
        cout<<array.at(i)<<" ";
    }
    cout<<endl;
}
array<int,5> global;//the globally declared array has all values set to zero
int main(){
    array<int,5> arr;//{?,?,?,?,?} // all the five location have garbage value
    array<int,5> arr2={1}; //{1,0,0,0,0} the first is one rest all are zero
    array<int,5> arr3;
    arr3.fill(5);//this fill the entire array with 5
    //its indexes can be accessed by at function
    print_array(arr);
    print_array(arr2);
    print_array(arr3);
    print_array(global);
    return 0;
}
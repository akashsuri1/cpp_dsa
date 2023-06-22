#include<iostream>
using namespace std;
int main(){
    //declartion of an array 
    //datatype name[size] this way we can declare an array
    int number[15];
    cout<<"acessing the element at o index "<<number[0]<<endl;
    cout<<"acessing the element at 14 index "<<number[14]<<endl;
    cout<<"bute we cannot access an index greater than the size of the \narray like number[20] in this case "<<endl;
    //cout<<number[20] it is an error to acces an such an array index we need array size greater than the 21 as index ranges from 0-n-1 continousally allocated memory block
    // if array is not intialized then it is filled with garbage values throughout 
    cout<<endl;
    return 0;
}
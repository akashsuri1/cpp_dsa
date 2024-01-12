#include<iostream>
using namespace std;
int main(){
    int arr[10]={12,23,122,44};
    cout<<"Address of the 0th memory block is : "<<arr<<endl;
    cout<<"Value of the 0th memory block is : "<<arr[0]<<endl;
    cout<<"Address of the 0th memory block is : "<<&arr[0]<<endl;
    cout<<"Accessing value through Address : "<<*arr<<endl;
    cout<<"Accessing 1\'st index value using pointer : "<<*(arr+1)<<endl;
    cout<<"Varition with pointer\'s : "<<*arr+1<<endl;
    cout<<"Array\'s indexing : "<< arr[2]<<endl;
    cout<<"Behind the scence working : "<<*(arr+2)<<endl;
    cout<<"Array\'s indexing : "<< 2[arr]<<endl;
    return 0;
}
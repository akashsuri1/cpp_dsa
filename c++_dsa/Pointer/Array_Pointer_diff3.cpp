#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Array\'s value : "<<arr<<endl;
    //arr=arr+1;
    //cout<<"this error cannot change "<<endl;
    int *ptr=&arr[0];
    cout<<"Before : "<<ptr<<endl;
    ptr++;
    cout<<"After : "<<ptr<<endl;
    return 0;
}
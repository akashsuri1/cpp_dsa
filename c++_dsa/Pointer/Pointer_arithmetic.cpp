#include<iostream>
using namespace std;
int main(){
    int num=5;
    int *ptr=&num;
    (*ptr)++;
    cout<<"Value is "<<num<<endl;
    cout<<"Before Pointer : "<<ptr<<endl;
    ptr++;
    cout<<"After pointer : "<<ptr<<endl;
    cout<<"So it started to point to next integer memory location"<<endl
    <<"That is +4"<<endl;
    return 0;
}
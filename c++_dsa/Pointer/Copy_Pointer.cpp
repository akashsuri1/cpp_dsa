#include<iostream>
using namespace std;
int main(){
    int num=5;
    int *ptr=&num;
    cout<<"Address is : "<<ptr<<endl;
    cout<<"value is : "<<*ptr<<endl;
    int *copy=ptr;
    cout<<"Address is : "<<copy<<endl;
    cout<<"value is : "<<*copy<<endl;
    return 0;
}
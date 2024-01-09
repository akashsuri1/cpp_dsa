#include<iostream>
using namespace std;
int main(){
    int num=5;
    int *ptr=&num;
    cout<<"Address is : "<<ptr<<endl;
    cout<<"Value is : "<<*ptr<<endl;
    cout<<"Size of integer pointer is "<<sizeof(ptr)<<endl;
    double digit=4.7;
    double *dptr=&digit;
    cout<<"Address is : "<<dptr<<endl;
    cout<<"Value is : "<<*dptr<<endl;
    cout<<"Size of double pointer is "<<sizeof(dptr)<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int num=5;
    int a=num;
    cout<<"Before increment : "<<num<<endl;
    a++;
    cout<<"After increment : "<<num<<endl;
    int *ptr=&num;
    cout<<"Before increment : "<<num<<endl;
    (*ptr)++;
    cout<<"After increment : "<<num<<endl;
    return 0;
}
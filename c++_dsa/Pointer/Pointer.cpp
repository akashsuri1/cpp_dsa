#include<iostream>
using namespace std;
template<typename T>
void print(T *ptr){
    cout<<"Address is : "<<ptr<<endl;
    cout<<"Value is : "<<*ptr<<endl;
}
int main(){
    int num=5;
    cout<<"Address is : "<<&num<<endl;
    int *ptr=&num;
    print(ptr);
    double digit=4.7;
    cout<<"Address is : "<<&digit<<endl;
    double *dptr=&digit;
    print(dptr);
    char ch='a';
    char *cptr=&ch;
    cout<<"Address is : "<<&ch<<endl;
    print(cptr);
    return 0;
}
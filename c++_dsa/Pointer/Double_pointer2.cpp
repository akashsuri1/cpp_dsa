#include<iostream>
using namespace std;
int main(){
    int i=5;
    int* ptr=&i;
    int** dptr=&ptr;
    cout<<"Value are : "<<endl;
    cout<<"ith value : "<<i<<endl;
    cout<<"ith value from ptr : "<<*ptr<<endl;
    cout<<"ith value from double pointer : "<<**dptr<<endl;
    cout<<"The address of i is"<<endl;
    cout<<"variable address : "<<&i<<endl;
    cout<<"Variable address from pointer : "<<ptr<<endl;
    cout<<"Variable address from double pointer : "<<*dptr<<endl;
    cout<<"The address of pointer : "<<endl;
    cout<<"Pointer address is : "<<&ptr<<endl; 
    cout<<"Pointer address from double pointer : "<<dptr<<endl;
    return 0;
}
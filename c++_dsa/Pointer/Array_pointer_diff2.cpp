#include<iostream>
using namespace std;
int main(){
    int array[10];
    cout<<"The array address : "<<array<<endl;
    cout<<"The array address : "<<&array[0]<<endl;
    cout<<"The array address : "<<&array<<endl;
    int *ptr=array;
    cout<<"The pointer\'s value : "<<ptr<<endl;
    cout<<"The value at pointer address : "<<*ptr<<endl;
    cout<<"The pointer\'s address : "<<&(ptr)<<endl;
    return 0;
}
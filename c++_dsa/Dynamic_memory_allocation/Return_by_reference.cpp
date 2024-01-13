#include<iostream>
using namespace std;
int& func(int x){
    int a=x;
    int& ref=a;
    return ref;
}
int* funptr(int x){
    int *ptr=&x;
    return ptr;
}
//both of these will give error as they are passing reference to the local variable or the local variable adress which get terminated when the function block ends 
int main(){
    int n=5;
    int &y=func(5);
    cout<<y<<endl;
    return 0;
}
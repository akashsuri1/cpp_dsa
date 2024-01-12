#include<iostream>
using namespace std;
void print(int* p){
    cout<<"Value of pointer is : "<<*p<<endl;
}
int main(){
    int n=5;
    int *ptr=&n;
    print(ptr);
    return 0;
}
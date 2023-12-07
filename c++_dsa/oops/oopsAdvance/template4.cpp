#include<iostream>
using namespace std;
template <typename t1,typename t2>
void display(t1 a,t2 b){
    cout<<a<<endl;
    cout<<b<<endl;
}
template<typename T>
void swapp(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    display(3,'c');
    display<int,float>(4,9.9);
    int a=3;
    int b=4;
    swapp<int>(a,b);
    display<int,int>(a,b);
    swapp(a,b);
    display(a,b);
    return 0;
}
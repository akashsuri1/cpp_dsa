#include<iostream>
using namespace std;
class A{
    public:
        int add(int a,int b){
            return a+b;
        }
        int add(int a,int b,int c){
            return a+b+c;
        }
    //so these function are overloaded with different type of argument so these can be used easily 
};
int main(){
    A obj;
    cout<<obj.add(5,10)<<endl;
    cout<<obj.add(5,10,15)<<endl;
    return 0;
}
//so to do function overloading we need to change the signatue 
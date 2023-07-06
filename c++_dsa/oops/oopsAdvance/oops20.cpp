#include<iostream>
using namespace std;
class A{
    public:
        int sum(int a,int b,int c=0,int d=0,int w=0){
            return a+b+c+d+w;
        }
};
int main(){
    A obj;
    cout<<obj.sum(2,3)<<endl;
    cout<<obj.sum(2,3,4)<<endl;
    cout<<obj.sum(2,3,4,5)<<endl;
    cout<<obj.sum(2,3,4,5,6)<<endl;
    return 0;
}
//so by using default arguments we can call the function with different no of argument hence function overloading can be done this way or the polymorphsim 
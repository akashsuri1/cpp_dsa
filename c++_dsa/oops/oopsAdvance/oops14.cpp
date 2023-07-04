#include<iostream>
using namespace std;
class A{
    public:
    void func1(){
        cout<<"inside function one "<<endl;
    }
};
class B:public A{
    public:
    void func2(){
        cout<<"inside function two"<<endl;
    }
};
class C:public A{
    public:
    void func3(){
        cout<<"inside function three "<<endl;
    }
};
int main(){
    A obj;
    obj.func1();
    B obj1;
    obj1.func1();
    obj1.func2();
    C obj2;
    obj2.func1();
    obj2.func3();
    return 0;
    //here this is an herichal inheritance where one class serves as base class for more than one derived class
    //this furthe turn into an full tree of herichal inheritance here the a class serves as parent class for the b class and the c class 
}
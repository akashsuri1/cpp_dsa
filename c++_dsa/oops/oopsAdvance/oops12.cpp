//this is multiple inheritance in which an single class inherits more than one class and it can access the properties and methods of both class and according to the mode of inheritance 
#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"class A constructor "<<endl;
    }
    void func1(){
        cout<<"function of class a"<<endl;
    }
    ~A(){
        cout<<"class A Destructor "<<endl;
    }
};
class B{
    public:
    B(){
        cout<<"class B constructor"<<endl;
    }
    void func2(){
        cout<<"function of class b"<<endl;
    }
    ~B(){
        cout<<"class B destructor "<<endl;
    }
};
//here this order is important in the mutliple inheritance the class a is first base class and b is the second base class 
class C:public A,public B{
    public:
    C():A(),B(){
        cout<<"class c constructor "<<endl;
    }
    ~C(){
        cout<<"class c destructor "<<endl;
    }

};
//here class c is inheriting the class a and class b this is example of multiple inheritance
int main(){
   C obj;
   obj.func2();
   obj.func1();
   return 0;
}
//here the order is important firstly class a constructor is called then b which leads to last calling of c constructor
//so class a is inherting from b class and a class here a is the first base class and b is the second base class so firstly a constructor is called then b
/*  class c: public a public b
    so firstly a constuctor is called then b 
    constructor 
    so this is example of multiple inheritance where there are more than one base class for an derived class 
*/
//order of calling is derived to base 
//while the order of execution is base to derived thats it 
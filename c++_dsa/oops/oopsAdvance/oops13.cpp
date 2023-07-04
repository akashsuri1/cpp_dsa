//parametrized constructor in multiple inheritance
#include<iostream>
using namespace std;
class A{
    private:
        int x;
    public:
       A(int a){
         cout<<"class a constructor is called "<<endl;
         this->x=a;
       }
       void show(){
           cout<<"X = "<<x<<endl;
       }
       ~A(){
           cout<<"destructor of A class "<<endl;
       }
};
class B{
    private:
        int y;
    public:
        B(int b){
            cout<<"class b constructor is called "<<endl;
            this->y=b;
        }
        void show(){
            cout<<"y = "<<y<<endl;
        }
       ~B(){
           cout<<"destructor of B class "<<endl;
        }
};
//example of multiple inheritance where there are more than one base class 
class C:public A,protected B{
    private:
        int z;
    public:
        //this is explicit envokation of base class consturctor by derived class
        C(int a,int b,int c):A(a),B(b)
        {    
            //we have passed A in A class constructor and passed B in B class constructor this is simple  
            cout<<"constructor of class c is called "<<endl;
            this->z=c;
        }
        void show(){
            //this scope resolution operator is used to avoid inheritance ambiquity due to same function in both base class
            A::show();
            B::show();
            cout<<"Z = "<<z<<endl;
        }
       ~C(){
           cout<<"destructor of C class "<<endl;
        }
};
int main(){
        C obj(5,10,15);
        obj.show();
        return 0;
}
//order of calling constructor is from derived to base
//order of execution is base to derived 
//therfore here the order of inheritance is important 
//firstly A being first sub-class then b second firstly a constuctor is called then the b class constructor is called  

#include<iostream>
using namespace std;
class A{
    public:
    string common="i am common from A ";
    static int count;
    A(){
        cout<<"inside a constructor "<<endl;
        count++;
    }
    void func(){
        cout<<"I am A"<<endl;
    }
};
int A::count=0;
class B{
    public:
    string common="I am common from B ";
    static int count;
    B(){
        cout<<"inside b constructor "<<endl;
        count++;
    }
    void func(){
        cout<<"I am B "<<endl;
    }
};
int B::count=1;
class C:public A,public B{
    //now we will use this class to use inheritance  ambiquity
    public:
        int x;
        int y;
        int z;
    public:
        C(int x,int y,int z){
            cout<<"C constuctor "<<endl;
            this->x=x;
            this->y=y;
            this->z=z;
        }
        void get();
        C operator+(C &obj){
            C ans(this->x+obj.x,this->y+obj.y,this->z+obj.z);
            return ans;
        }
        //this is an example of operator overloading where we have given the new form to the already existing operator
};
//this is how an memebrs function is defined outside an class 
void C::get(){
     cout<<" x = "<<this->x<<endl;
     cout<<" y = "<<this->y<<endl;
     cout<<" z = "<<this->z<<endl;

}
int main(){
    //so this way :: this scope resolution operator performs three operation define class member function outside out 
    C obj(2,3,4);
    obj.A::func();
    obj.B::func();
    cout<<obj.A::common<<endl;
    cout<<obj.B::common<<endl;
    obj.get();
    C obj2(4,5,7);
    //operator overloading 
    C obj3=obj+obj2;
    //so here the copy default constructor comes into play thus helping us to copy the returned object in obj3
    obj3.get();
    obj3.A::func();
    obj3.B::func();
    cout<<obj3.A::common<<endl;
    cout<<obj3.B::common<<endl;
    cout<<" A count = "<<A::count<<endl;
    cout<<" B count = "<<B::count<<endl;
    return 0;
    //so here we have created an class c with inheriting from two class b and a both have an function/datamemebrs in common the copy of both function get created in the new class when we try to access those class function or the commmon data members an ambiquity arises to solve this we use the scope resolution operator like obj.func() first we write class name obj.A::func(); where a is the class 
    //so here we explicitly define which class data members or method to use 
}
//abstract class ,virtual class and function and friend class topics left 
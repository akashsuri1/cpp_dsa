#include<iostream>
using namespace std;
class base_class{
    public:
        int var_base;
        virtual void display(){
            cout<<"The value of var_base is "<<var_base<<endl;
        } 
};
class derived:public base_class{
    public:
        int var_derived;
        void display() override{
            cout<<"The value of var_base is "<<var_base<<endl;
            cout<<"The value of var_derived is "<<var_derived<<endl;
        }

};
int main(){
    base_class *bptr;
    base_class obj;
    obj.var_base=24;
    bptr=&obj;
    bptr->display();
    derived dobj;
    dobj.var_derived=40;
    bptr=&dobj;
    bptr->var_base=30;
    bptr->display();
    return 0;
}
//this time we have declared it virtual so when base class pointer points to derived class object then also the derived class function is only called
#include<iostream>
using namespace std;
class base_class{
    public:
        int var_base;
        void display(){
            cout<<"The value of var_base is "<<var_base<<endl;
        } 
};
class derived:public base_class{
    public:
        int var_derived;
        void display(){
            cout<<"The value of var_base is "<<var_base<<endl;
            cout<<"The value of var_derived is "<<var_derived<<endl;
        }

};
int main(){
    base_class *bptr;
    derived dobj;
    base_class bobj;
    bptr=&dobj;
    bptr->var_base=34;
    bptr->display();
    // cannot access this bptr->var_derived
    derived* dptr=&dobj;
    dptr->var_derived=44;
    dptr->display();
    return 0;
}
#include<iostream>
using namespace std;
class Animal{
    private:
        int age;
    public:
        Animal(int age){
            this->age=age;
        }
        void speak(){
            cout<<"Speaking "<<endl;
        }
        void running(){
            cout<<"i am running"<<endl;
        }
        void aging(){
            cout<<"i am aging"<<endl;
            (*this)++;
        }
        int getage(){
            return this->age;
        }
        void operator ++(int){
            this->age++;
        }
        void climbing(){
            cout<<"i can climb any place"<<endl;
        }
};
class Dog:public Animal{
    public:
        Dog(int x):Animal(x){
            cout<<"Dog constructor"<<endl;
        }
        void speak(){
            cout<<"Barking"<<endl;
        }
        void running(int age){
              if(age<10){
                cout<<"i am running fast"<<endl;
              }else if(age<20){
                    cout<<"more faster"<<endl;
              }else{
                    cout<<"i have slowed now "<<endl;
              }
        }
        int aging(){
            (*this)++;
            return this->getage();
        }
};
int main(){
    Dog german(20);
    german.speak();
    german.Animal::speak();
    german.running(german.getage());
    german.running(german.getage());
    german.Animal::running();
    cout<<german.aging()<<endl;
    german.Animal::aging();
    cout<<german.getage()<<endl;
    german.climbing();
    return 0;

}
//so sometimes it happens that we have made an entity exsist in multiple forms and we get to know at the runtime only not at compile time than it is known as runtime polymorphisim
//the concept that is used in run time polymorphisim is of method overdring
//suppose there is an function in an class we have inherited that class but we have written explicitly our own implmentation of the function if we call the function  then of the derived class is called then this is known as function overriding 
//there are some rules to overide an function that is the name of two function shoul be same as well as there signature no and type of arguments as well as inheritance shoul be involed then only run time polymorphisim is achieved 
//if we have not written our custom implementation then that of the base class is used 
//this comes to play when we have an class with 10 methods and we want 8 methods as it is and we have written custom implemenation also this way we have achieved function overiding and code reusability
//so we cannot override an function with changing number or type of argument it will give an error
//an inherited function cannot be overloaded we can only one time redefine 
//we can change the return type but no of arguments and name should be same
//by chanig function arguments method overiding does not occur

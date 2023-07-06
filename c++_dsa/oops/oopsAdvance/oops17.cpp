#include<iostream>
using namespace std;
class A{
    public:
        void sayhello(){
            cout<<"Hello to this world"<<endl;
        }
        void sayhello(string name){
            cout<<"Hello "+name<<endl;
        }
        void sayhello(string name,int n){
            cout<<"hello "+name+" "<<" the day you are the best "<<n<<endl;
        }
        void sayhello(char* a){
            cout<<"Say hello and lets "<<a<<endl;
        }
        //if we just change return type like int sayhello(char* a) then function will not be overloaded and an error will occur 
        //this way by changing the no of variable or the type of variable we can do function overloading 
};
int main(){
    A obj;
    string name;
    getline(cin,name);
    obj.sayhello();
    obj.sayhello(name,4);
    char activity[100];
    cin.getline(activity,100);
    obj.sayhello(name);
    obj.sayhello(activity);
    return 0;
}
//polymorphisim means an entity having different formms
//means that an entity existing in different forms
//compile time polymorphisim or static polymorphisim means that before executing at the runtime we know that the entoty have different forms 
//two things in the polymorphisim are function overloading that mean creating many function with same name that is function having many forms 
//these can be done by changing the function signature or the function argument's
//two ways this can happen that is changing the number of arguments or changing the type of arguments
//or by the default argument the same function can be called by variable no of argument  
//if we only change the return type of the function we cannot change do the overloading of those function
//the other thing in operator overloading in which the the same entity is operated in different form 
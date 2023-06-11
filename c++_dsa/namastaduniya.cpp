#include<iostream>
//header file cotaning all the necessary functionalities
using namespace std;
namespace hello1{
    void hello(){
        cout<<"hello and good morning "<<endl;
    }
     
}
namespace hello2{
     void hello(){
        cout<<"namaste and good everning"<<endl;
     }
}
//namespace is an way to diferentiate between classes and ,method of same name of different libraries and namespace below is an 
//example so basically it defines the scope of an variable
using namespace hello2;
int main(){
     hello();
    hello1:: hello();
    cout<<"namaste duniya"<<endl;
    cout<<"i am here to give my 100% and prove everyone wrong\n";
    //this is the functionality provided by c++ to print 
    //endl is mapped with enter the same for /n while the ; used as statment terminator
}
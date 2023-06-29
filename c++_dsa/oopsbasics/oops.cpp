#include<iostream>
#include"sword.cpp" //so this way we have included an external class 
using namespace std;
//this way we can define classes explicitly in our code
class Hero{
    //naming of class is done in an camelcase 
    //class is like an blueprint of the object contaning all the methods and the properties 
    //these are properties 
    //user defined datatype
    int health;
    char name[100];
    char level;
};
class Enemy{
    int health;
};
class Empty{
    //this is an empty class with no methods we will check its size
};
int main(){
    //object creation
    //object are instance of class or an variable of that type
    Enemy raju;
    Hero ram;
    Empty e1;
    Sword dagger;
    //so this way we can create an object 
    //an object is allocated memory to store its properties defined in class 
    cout<<"size of an enemy class object is "<<sizeof(raju)<<endl;
    cout<<"size of an empty class object is "<<sizeof(e1)<<endl;
    //so empty class object has allocated with 1 byte memory just to mark its existence 
    return 0;
}
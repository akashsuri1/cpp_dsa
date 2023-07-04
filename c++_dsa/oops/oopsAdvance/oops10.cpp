#include<iostream>
#include<cstring>
using namespace std;
class Animal{
    private:
    int weight;
    int age;
    char* origin;
    public:
    Animal(char* name){
        cout<<"inside the animal constuctor"<<endl;
        this->origin=new char[100];
        strcpy(this->origin,name);
    }
    void setage(int age){
        this->age=age;
    }
    void setweight(int weight){
        this->weight=weight;
    }
    int getage(){
        return this->age; 
    }
    int getweight(){
        return this->weight;
    }
    char* getorigin(){
        return this->origin;
    }
    void running(){
        cout<<"i can run at an high speed"<<endl;
    }
    ~Animal(){
        cout<<"inside animal destuctor"<<endl;
        delete []origin;
    }
};
class Dog:public Animal{
    public:
    char *breed;
    public:
    Dog(char* array,char *array2):Animal(array2){
        cout<<"inside the dog constructor "<<endl;
        this->breed=new char[100];
        strcpy(this->breed,array);
    }
    void print(){
        cout<<"origin = "<<this->getorigin()<<endl;
        cout<<"breed = "<<this->breed<<endl;
        cout<<"weight = "<<this->getweight()<<endl;
        cout<<"age = "<<this->getage()<<endl;
    }
    void barking(){
        cout<<"i can bark loudly"<<endl;
    }
    void hunting(){
        cout<<"i can help in hunting also "<<endl;
    }
    ~Dog(){
        cout<<"inside dog destuctor"<<endl;
        delete []this->breed;
    }
};
int main(){
    //we are no going to see the inheritance of parameterized constuctor and destructor through this example lets move forward
    char array[100];
    cout<<"please enter the origin ";
    cin.getline(array,100);
    cout<<"please enter the breed ";
    char array2[100];
    cin.getline(array2,100);
    Dog d1(array2,array);
    int common;
    cout<<"please enter the age "<<endl;
    cin>>common;
    d1.setage(common);
    cout<<"please enter the weight "<<endl;
    cin>>common;
    d1.setweight(common);
    d1.barking();
    d1.hunting();
    d1.running();
    d1.print();
    return 0;
    //we have accessed all the parameters and the methods of the super class by inheritance and we are also seeing inheritance of parameterized constructor and destructor here
    //firstly the animal constructor is called then the dog constructor and then the destructor of dog is called then of the animal
    /*a->b 
    firstly a constructor 
    i called then b then 
    b destuctor is called 
    first then a
    */
}
//so we will now implement single inheritance where an class inheritts from  another class 
//here the inherited class can access the methods and properties of another class 
//can leverage this to increase code reusability as well as many other application 
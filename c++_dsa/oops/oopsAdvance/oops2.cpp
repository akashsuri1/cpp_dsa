#include<iostream>
#include<string>
using namespace std;
void printed();
class Human{
    private:
        static int count;
        int age;
    public:
        int height;
        int weight;
        string color;
    public:
        Human(){
            Human::count++;
            cout<<"human is the base class"<<endl;
        }
        void setage(int age){
            this->age=age;
        }
        void setheight(int height){
            this->height=height;
        }
        void setWeight(int weight){
            this->weight=weight;
        }
        void setcolor(string color){
            this->color=color;
        }
        int getage(){
            return this->age;
        }
        int getweight(){
            return this->weight;
        }
        int getheight(){
            return this->height;
        }
        string getcolor(){
            return this->color;
        }
        static int getcount(){
            return count;
        }
        ~Human(){
            cout<<"destructor of human class"<<endl;
        }
};
int Human::count=0;
//so the mode tell, the inherited memebers mode specifiers in the derived class whereas here private members of base class can not be used here 
class Male:public Human{
    public:
       string name;
       Male():Human(){
        cout<<"male is an subclass"<<endl;
       }
       //firstly human constuctor is called then the constructor of the male is called   
       void setname(string a){
          this->name=a;
        }
        void sleeping(){
            printed();
            cout<<"i am sleeping and having fun "<<endl;
            printed();
        }
        void working(){
           printed();
           cout<<"i am working";
           printed();
        }
        void print(){
              printed();
              cout<<"Name ="<<this->name <<endl;
              cout<<this->name +" age = "<<this->getage()<<endl;
              cout<<this->name +" colour = "<<this->getcolor()<<endl;
              cout<<this->name +" height  = "<<this->getheight()<<endl;
              cout<<this->name +" weight = "<<this->getweight()<<endl;
              cout<<"count = "<<Human::getcount();
              printed();
        }
        ~Male(){
            cout<<"destructor of male class "<<endl;
        }
};

int main(){
    //so this is an example of inheritance in which the derived class can access the data members and variable of the inherited class depending on the mode of inheritance  
    Male m1;
    string name;
    int common;
    cout<<"please enter the name ";
    getline (cin,name);
    m1.setname(name);
    cout<<"please enter the weight ";
    cin>>common;
    m1.setWeight(common);
    cout<<"please enter the height ";
    cin>>common;
    m1.setheight(common);
    cout<<"please enter the colour ";
    //here first we have to eliminate the null characted stored in the integer
    cin.ignore();
    getline(cin,name);
    m1.setcolor(name);
    cout<<"please enter the age ";
    cin>>common;
    m1.setage(common);
    m1.print();
    m1.sleeping();
    m1.working();
    return 0;
}
void printed(){
    cout<<endl<<endl;
}
// so if we want to inherit an property or methods of some class we can use inheritance 
// for example we have an human class and it has properties age,weight,height and colour we want to make the female and male class with some basic properties we can inherit these basic properties from the human class and can write our own implentations
// like here human class is the base class or the super class from which the data is inherited  and the male class is the sub-class or the child   class 
// when we inherited from an class we can access its properties and methods
// here the male class can access the properties of the human class it constuctor is also inherited
// the syntax of the inheritance is like this class name_of_child class: modeofinheritance parentclass name this is how it happens 
//when we inherit the class it properties or methods also get included in the derived class we dont have to again repeat the same logic thus increasing the code repat usage   
/*
  if a -> b -> c is the order of inheritance
  then the order of the constuctor class is 
  a,
  b,
  c,
  and the order of destructor call is 
  c,
  b,
  a,
*/
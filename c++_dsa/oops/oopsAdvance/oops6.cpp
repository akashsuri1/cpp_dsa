#include<iostream>
#include<string>
using namespace std;
void printed();
class Human{
    protected:
        static int count;
        int weight;
        //it can be accessed inside the class or in the child class easily 
    public:
        int age;
        int height;
        string color;
    public:
        Human(){
            Human::count++;
            cout<<"human is the base class"<<endl;
        }
        ~Human(){
            cout<<"destructor of human class"<<endl;
        }
};
int Human::count=0;
//we have inherited the protected member as public here here
class Male:public Human{
    public:
       string name;
       Male():Human(){
        cout<<"male is an subclass"<<endl;
        }
        void setname(string a){
          this->name=a;
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
            return Human::count;
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
              cout<<"count = "<<this->getcount();
              printed();
        }
        ~Male(){
            cout<<"destructor of male class "<<endl;
        }
        //so we can do anything to these protected memebers here in the class but cannot access them outside but in child class we can access them
        //we can make an getter or setter here to work with these protected variable
        //so we have made an public getter setter to work with these
};

int main(){
    Male m1;
    m1.setWeight(100);
    cout<<m1.getweight()<<endl;
    m1.age=90;
    cout<<m1.age<<endl;
    //we can access these public data memebers of parent call as these are public only here in the new class
    //when the protected data memebrs is inherited in the public mode then the resultant mode is protected only 
    //which means we can acess it inside the class only or by getter or setter
    // m1.Weight=90;//cannot do this as proected variable
    return 0; 
}
void printed(){
    cout<<endl<<endl;
}

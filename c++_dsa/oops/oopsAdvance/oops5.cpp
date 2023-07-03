#include<iostream>
#include<string>
using namespace std;
void printed();
class Human{
    public:
        static int count;
        int age;
        int height;
        int weight;
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
//we have inherited the public member as private here
class Male:private Human{
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
        //so we can do anything to these private variable here inside the class but cannot access them outside the class or int the child class 
        //we can make an getter or setter here to work with these private variable
};

int main(){
    //when the public data memebrs is inherited in the private  mode then the resultant mode is private only 
    //which means we can acess it inside the class only or by getter or setter
    Male m1;
    // m1.Weight=90;//cannot do this as private variable
    m1.setage(20);
    cout<<m1.getage()<<endl;
    //m1.height=90; so we cannot do it here so we will use getter and setter
    return 0; 
}
void printed(){
    cout<<endl<<endl;
}

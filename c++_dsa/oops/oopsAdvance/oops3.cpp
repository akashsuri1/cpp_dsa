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
class Male:public Human{
    public:
       string name;
       Male():Human(){
        cout<<"male is an subclass"<<endl;
       }
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
    //when the public data memebrs is inherited in the public mode then the resultant mode is public only 
    //which meams we can acess it here
    Male m1;
    m1.height=90;
    cout<<"m1 height is "<<m1.height<<endl;
    return 0; 
}
void printed(){
    cout<<endl<<endl;
}
//private data members of an class are never inherited in the child class or the derived class 
//protected access specifier means that the data members cannot be accessed outside the class but if an child class is created then it can be acessed inside it 
//the mode of inheritance determine that what will be the mode of accesss of the inherited data members in the derived class 

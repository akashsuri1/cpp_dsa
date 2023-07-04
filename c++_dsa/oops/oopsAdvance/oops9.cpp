#include<iostream>
#include<string>
using namespace std;
void printed();
class Human{
    private:
        static int count;
        int weight;
        int age;
        //it can be accessed inside the class only
    public:
        int height;
        string color;
    public:
        Human(){
            Human::count++;
            cout<<"human is the base class"<<endl;
        }
        void setweight(int weight){
            this->weight=weight;
        }
        void setage(int age){
            this->age=age;
        } 
        int getage(){
            return this->age;
        }
        int getweight(){
            return this->weight;
        }
        static int getcount(){
            return Human::count;
        }
        ~Human(){
            cout<<"destructor of human class"<<endl;
        }
};
int Human::count=0;
//we can never inherit the private data memebers of the class whatever the mode may be they are always inaccessible
class Male:private Human{
    public:
       string name;
       Male():Human(){
        cout<<"male is an subclass"<<endl;
        }
        void setname(string a){
          this->name=a;
        }
        void setheight(int height){
            this->height=height;
        }
       void setcolor(string color){
            this->color=color;
        }
        void setageandweight(int age,int weight){
            this->setweight(weight);
            this->setage(age);
            cout<<"weight is "<<this->getweight()<<endl;
            cout<<"age is "<<this->getage()<<endl;
        }
       
        int getheight(){
            return this->height;
        }
        string getcolor(){
            return this->color;
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
        //so we cannot  do anything to these private memebers of parent class here in the class  
        //we can make an getter or setter here to work with these private variable im the parent class and then can inherit it 
};

int main(){
    Male m1;
    m1.setageandweight(20,100);
    return 0; 
}
void printed(){
    cout<<endl<<endl;
}
//mode of inheritance are now clear

#include<iostream>
#include<cstring>
#include<string>
using namespace std;
class Hero{
    private:
        int health;
        char level;
    public:
        char *Name;
        Hero(){
            cout<<"this is an simple constructor "<<endl;
            Name=new char[100];
        }
        Hero(int health){
            Name=new char[100];
            this->health;
        }
        Hero(int health,char level){
            Name=new char[100];
            this->health=health;
            this->level=level;
        }
        Hero(char name[],int health,char level){
            this->Name=new char[100];
            strcpy(this->Name,name);
            this->health=health;
            this->level=level;
        }
        Hero(Hero &temp){
            cout<<"copy constructor called"<<endl;
            char *ch=new char[strlen(temp.Name)+1];
            strcpy(ch,temp.Name);
            this->Name=ch;
            this->health=temp.gethealth();
            this->level=temp.getlevel();
        }
        void print(){
            cout<<endl;
            cout<<" [ Name : "<<this->Name<<" ,";
            cout<<" Health : "<<this->health<<" ,";
            cout<<" Level : "<<this->level<<" ] "<<endl<<endl;

        }
        int gethealth(){
            return health;
        }
        char getlevel(){
            return level;
        }
        void sethealth(int health){
            this->health=health;
        }
        void setlevel(char level){
            this->level=level;
        }
        void setName(char name[]){
            strcpy(this->Name,name);
        }
        //the ~ sign is used to differntiate constructor and destuctor
        ~Hero(){
            // it is used to release the dynamically allocated data memeber of class to prevent the data loss
            // When a class contains a pointer to memory allocated in the class, we should write a destructor to release memory before the class instance is destroyed. This must be done to avoid memory leaks.
            // like here
            delete []Name;
            cout<<endl<<"destuctor bhai called"<<endl;
        }
        //now default constructor have no power here
};
int main(){
      //static allocation
      char name[100];
      cin.getline(name,100);
      Hero h1(name ,120,'c');
      h1.print();
      cin.getline(name,100);
      //dynamic allocation
      Hero *h2=new Hero(name,90,'B');
      //when to object scope end it destructor is called which frees the memory held by the object
      //it has  no return type no paramter and same name as class name
      //when an class is created it s destructor is also created
      //we can also create our own version of destuctor but once its created we cannot access the default one
      //for statically allocated object is called automatically
      //But for dynamically allocatted object we have to call the destructor by ourself only 
      h2->print();
      delete h2;
      //destructor called for h2
      return 0; 
}
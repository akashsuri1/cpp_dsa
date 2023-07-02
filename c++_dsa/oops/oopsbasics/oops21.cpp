#include<iostream>
#include<cstring>
#include<string>
using namespace std;
class Hero{
    private:
        int health;
        char level;
        static char* origin;
    public:
        char *Name;
        static int timetocomplete;
        //so the static variable belong to the class and can be accessed without any object creation
        //they are made by putting static in front of the data members they have same value for each object and can be public or pivate also they are intialized outside the class
        //they show the overall properties of class and can be accessed without  object creation and scope resolution 
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
        ~Hero(){
            delete []Name;
            cout<<endl<<"destuctor bhai called"<<endl;
        }
        static void setOrigin(char name[]){
             //the problem was there was no memory for origin to be stored so therfore it can be corrected by
             //origin=new char[strlen(name)+1];
            strcpy(origin,name);
        }
        static void getOrigin(){
            cout<<origin<<endl;
        }
        //these are special function for static memebers they cannot access other data memebers
};
int Hero::timetocomplete=100;
char *Hero::origin=new char[100] {'i','n','d','i','a','\0'};
//so the static members are intialized this way datatype classname::fieldname=value; ::->this is known as scope resolution operator
int main(){
    cout<<Hero::timetocomplete<<endl;
    Hero::timetocomplete++;
    // we can also acess this by object but that is an bad practice as they have no relation with object and rather the entire class thus an bad practice
    cout<<"the origin before is ";
    Hero::getOrigin();
    Hero ramesh;
    cout<<ramesh.timetocomplete<<endl;
    Hero* suresh=new Hero;
    cout<<suresh->timetocomplete<<endl;
    suresh->timetocomplete=10;
    cout<<ramesh.timetocomplete<<endl;
    cout<<suresh->timetocomplete<<endl;
    cout<<"enter the origin"<<endl;
    char name[100];
    cin.getline(name,100);
    Hero::setOrigin(name);
    cout<<"the origin is ";
    suresh->getOrigin();
    delete suresh;
    return 0;
}
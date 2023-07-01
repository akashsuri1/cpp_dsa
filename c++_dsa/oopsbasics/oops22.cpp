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
            strcpy(origin,name);
        }
        static void getOrigin(){
            cout<<origin<<endl;
        }
        static int gettime(){
            // cout<<health<<endl; it cannot do this as it is an static members
            cout<<origin<<endl;
            return timetocomplete;
        }
        //this is an static function which has no this keyword and is used to access the static data members and cannot access other data members
        //it can be called without any object creation and can only affect static data members only  
};
int Hero::timetocomplete=100;
char *Hero::origin=new char[100] {'i','n','d','i','a','\0'};
int main(){
    cout<<Hero::gettime()<<endl;
    return 0;
}
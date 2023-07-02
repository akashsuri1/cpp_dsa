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
            this->health;
        }
        Hero(int health,char level){
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
};
int main(){
      char name[100];
      cin.getline(name,7);
      Hero h1(name,90,'c');
      cin.getline(name,7);
      Hero h2(name,40,'A');
      h1.print();
      h2.print();
      h1=h2;
      /*so this is same as 
      h1.name=h2.Name
      h1.health=h2.health
      h1.level=h2.level
      this means we are copying the value of one object properties into the pther one but this is alos an shallow copy*/
      h1.print();
      h2.print();
      char name2[100];
      cin.getline(name2,100);
      strcpy(h1.Name,name2);
      h1.print();
      h2.print();
      //this alll validates the fact of shallow copy
      return 0;
}
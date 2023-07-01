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
        Hero(Hero &temp){
            cout<<"copy constructor called"<<endl;
            //we are creating an new array in this case which has length equal to that of copied object
            char *ch=new char[strlen(temp.Name)+1];
            //so here we have copied the value of temp name hence an new array is created with different base address
            strcpy(ch,temp.Name);
            this->Name=ch;
            //and in name of array an new base address is stored
            //this is deep copy in this case
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
      Hero h1;
      h1.sethealth(90);
      h1.setlevel('c');
      char name[]="Babbar";
      h1.setName(name);
      h1.print();
      Hero h2(h1);
      h2.print();
      h1.Name[0]='G';
      h1.print();
      h2.print();
      return 0;
      //so in this case the copy construtcor that is called does not copy the same address in the pointer but just a new array is created it new address is is passed so in this case any change in one will n ot affect the other object as it is copy and has different address
      //so this is what is called as deep copy 
}
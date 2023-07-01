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
            //so at the time of the creation this name is initialized dynamically  
        }
        Hero(int health){
            this->health;
        }
        Hero(int health,char level){
            this->health=health;
            this->level=level;
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
            //this way we have copied the value of passed name into the name of the current object
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
      //we can also call the copy constructor by this syntax h2=h1
      h2.print();
      h1.Name[0]='G';
      h1.print();
      h2.print();
      return 0;
      //so the default copy constructor does shallow copy that is the here the new array name is not created but as name as an pointer its value is copied so therefore using this name pointer value or array memmory address both the object accesss the same memory location and change in one array is reflected in other two as they both access the same memory location and new array is new created 
      //here hero and hero2 name both refer to the same memory location the name might be changed  but location is same 
      //so therefore to solve this we make our own copy constuctor as they dynamically allocated object are there in the class in this case 
}
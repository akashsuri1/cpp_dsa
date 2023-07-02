#include<iostream>
using namespace std;
class Hero{
    private:
        int health;
        char level;
    public:
        Hero(){
            //this is curent simple constructor
            cout<<"this is an simple constructor "<<endl;
        }
        //parameterized constructor
        Hero(int health){
            this->health;
        }
        Hero(int health,char level){
            this->health=health;
            this->level=level;
        }
        // we can also create our own copy constructor which can be made like this
        //we pass the refrence of the other object in copy constructor otherwise it will be called infinite no of times leading to program crash so we pass another object by refrence 
        Hero(Hero& temp){
            //so copy constuctor can also access private date memebrs also
            cout<<"copy constuctor called here"<<endl;
            this->health=temp.health;
            this->level=temp.level;
        }
        void print(){
            //we can use the this keyword to clear that we are currently reffering to the data memebrs of the current class data memebers
            cout<<"the health is "<<this->health<<endl;
            cout<<"the level is "<<this->level<<endl;
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
};
int main(){
    Hero ramesh(90,'B');
    ramesh.print(); 
    Hero ritesh(ramesh);
    ritesh.print();
    return 0;
}
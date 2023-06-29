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
        Hero(int health){
            this->health;
        }
        Hero(int health,char level){
            this->health=health;
            this->level=level;
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
    //so when we pass another object as parameter in constructor the copy constructor is called
    //every class has an default copy constructor which is called when the class is created and another object as paraameter
    //it just copys the value of data memeber of one object into the another one 
    //means here this means we ritesh.health=ramesh.health and ritesh.level=ramesh.level as easy as that
    ritesh.print();
    return 0;
}
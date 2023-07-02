#include<iostream>
using namespace std;
class Hero{
    private:
        int health;
        char level;
    public:
        //so when the object is created its constructor is called we can also make one this way it has no input parameter and no return type name as class name
        //this is known as default constructor 
        //so when we write our own constructor defualt one get deleted and our version is only in power in  that case
        Hero(){
            cout<<"the constructor is called as the object is created "<<endl;
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
    cout<<"before constructor called"<<endl;
    Hero ramesh;
    cout<<"after constructor called"<<endl;
    //when an object is created its constructor is called which is an special type of function having name as class name no return type and no parameter in case of default constructor which means here ramesh.Hero() is called and its executed
    Hero *h=new Hero;
    //so constructor is also calledin case of dynamic allocation simple
    return 0;
}
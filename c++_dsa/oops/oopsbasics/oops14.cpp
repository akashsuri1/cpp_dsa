#include<iostream>
using namespace std;
class Hero{
    private:
        int health;
        char level;
    public:
        //once we have created an custom version of constructor that made by default by constructor get deleted and we can make an object without parameter in this case
        Hero(int health){
            this->health;
        }
        Hero(int health,char level){
            this->health=health;
            this->level=level;
        }
        //so this way multiple constructor can be created with different parameters like function overloading 
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
   // Hero bye; we can create this object as we dont have default constructor in that   case 
    Hero ramesh(20);
    Hero *kamlesh=new Hero(90,'B');
    //this way we can dynamically call an parameterized constructor 
    cout<<"the parmeterized constructor "<<kamlesh->gethealth()<<endl;
    cout<<"the parmeterized constructor "<<kamlesh->getlevel()<<endl;
    delete kamlesh;
    return 0;
}
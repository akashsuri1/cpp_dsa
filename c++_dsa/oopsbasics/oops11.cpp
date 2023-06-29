#include<iostream>
using namespace std;
class Hero{
    private:
        int health;
        char level;
    public:
        int gethealth(){
            return health;
        }
        char getlevel(){
            return level;
        }
        void sethealth(int health){
            this->health=health;
            //this is an pointer which points to current object;
        }
        void setlevel(char level){
            this->level=level;
        }
};
int main(){
    //this is static allocation of an object in stack
    Hero h1;
    h1.sethealth(80);
    h1.setlevel('B');
    cout<<"The health is "<<h1.gethealth()<<endl;
    cout<<"The level is "<<h1.getlevel()<<endl;
    //dynamic allocation  of hero in heap an address of that is stored in an object type pointer through that pointer we can access this object properties or methods 
    Hero* h2=new Hero;
    //we can use the derefrence operator to first obtain the object at the address and then we can use do operator to access data members and methods
    (*h2).sethealth(90);
    (*h2).setlevel('A');
    cout<<"The health is "<<h2->gethealth()<<endl;
    cout<<"The level is "<<h2->getlevel()<<endl;
    //if we use dot operator and after de refrencing address we can use -> arrow operator in that case as an alternative syntax to make thing easy
    delete h2;
    //this way we release dynamically allocated memory and thats amazing 
    return 0;
}
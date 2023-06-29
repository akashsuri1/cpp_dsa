#include<iostream>
using namespace std;
class Hero{
    private:
        int health;
        char level;
    public:
        Hero(){
            cout<<"the constructor is called as the object is created "<<endl;
        }
        //so this is an parameterized constructor we can make an constructor which has parameter using which we can intialize some variable
        //this is an pointer which contains address of the current object so it is an pointer to the current object so using this keyword we can access the data members and function of the current object 
        //by varing parameter we can make multiple paramterized constructor 
        Hero(int health){
            //this keyword comes in hand when input parameters and data members have same name we can use this keyword to acess data members and methods
            cout<<"this-> "<<this<<endl;
            this->health=health;
        }
        Hero(int health,char level){
            this->health=health;
            this->level=level;
        }
        void print(){
            cout<<"the health "<<this->health<<endl;
            cout<<"the level "<<this->level<<endl;
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
    Hero bye;
    Hero ramesh(20);
    cout<<"the address of the ramesh is "<<&ramesh<<endl;
    ramesh.print();
    Hero *kamlesh=new Hero(90,'B');
    kamlesh->print();
    //this way we can dynamically call an parameterized constructor 
    Hero paul(20,'c');
    paul.print();
    delete kamlesh;
    return 0;
}
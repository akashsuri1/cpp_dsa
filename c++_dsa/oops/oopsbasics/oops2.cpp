#include<iostream>
using namespace std;
class Hero{
    //by default the acess modifier is private in the classs
    //can be acessed inside the class only
    //so the acess modifier govern the scope of datemembers and the methods
    private:
        int health;
        char level;
    public:
        void gethealth(){
            cout<<health<<endl;
        }
        void getlevel(){
            cout<<level<<endl;
        }
        //we are bale to acees the private memebers inside the class without error
        //this can be acessed outside the class also
        
};
int main(){
    Hero ramesh;
    //in this case we cant accesss the properties because they both are private and can be accessed inside the class only not outside it that
    // the dot operator is used to access the class data memebrs and the methods like in this case
    cout<<" the health is ";
    ramesh.gethealth();
    cout<<" the level is ";
    ramesh.getlevel();
    //so this way we can understand the power of access modifier 
    return 0;

}
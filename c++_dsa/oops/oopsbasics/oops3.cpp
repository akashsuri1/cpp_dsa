#include<iostream>
using namespace std;
class hero{
    public:
     int health;
     char level;
    private:
     void print(){
        cout<<level<<endl;
     }
};
int main(){
    hero ramesh;
    ramesh.health=70;
    ramesh.level='a';
    cout<<"the ramesh health is "<<ramesh.health<<endl;
    cout<<"the ramesh level is "<<ramesh.level<<endl;
    return 0;
}
// so health and level are public memebers so we can access them here easily and thats it 
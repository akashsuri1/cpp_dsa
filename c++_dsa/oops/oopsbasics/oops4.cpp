#include<iostream>
#include<cstring>
using namespace std;
class hero{
    private:
      int health;
      char level;
      static int time=1;
    public:
       int gethealth(){
         return health;
       }
       char getlevel(){
         return level;
       }
       void sethealth(int h,char *password){
         if(!strcmp(password,"98160akash")){
            health=h;
         } 
       }
       void setlevel(char ch,char *password){
         if(!strcmp(password,"98160akash")){
            level=ch;
         }
       }
};
int main(){
   hero ramesh;
   char password[20];
   cout<<"pplease enter the password ";
   cin.getline(password,19);
   cout<<password<<endl;
   int h;
   cout<<"entern value for health ";
   cin>>h; 
   ramesh.sethealth(h,password);
   char ch;
   cout<<"enter value for level ";
   cin>>ch;   
   ramesh.setlevel(ch,password);
   cout<<"the value of health is "<<ramesh.gethealth()<<endl;
   cout<<"the value of level is "<<ramesh.getlevel()<<endl;
   return 0;
}
//so using the getter and setter we can acces the private data memebrs in cpp and manipulate there value these are methods of class which govern the acces according to some logic or condition like password other things
//static members as well as static function do not contribute to size of object as they are only one for whole class 
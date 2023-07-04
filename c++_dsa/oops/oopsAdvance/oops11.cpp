#include<iostream>
#include<cstring>
using namespace std;
//multilevel inheritance with parametrized constuctor and destructor as well
class Animal{
    private:
      char* Bio_name;
      int age;
      int weight;
      static int count;
    public:
      Animal(int weight,int age,char* name){
          Bio_name=new char[100];
          count++;
          cout<<"inside the animal constructor "<<endl;
          this->weight=weight;
          this->age=age;
          strcpy(this->Bio_name,name);
      }
      void getdata(){
          cout<<endl;
          cout<<"[ Name = "<<this->Bio_name<<" ,";
          cout<<"age = "<<this->age<<" ,";
          cout<<"weight = "<<this->weight<<" ]"<<endl<<endl;
       }
       static int getCount(){
           return Animal::count;
       }
       void respiring(){
           cout<<"i am living by respiration only "<<endl;
       }
       void Growing(){
           cout<<"as i live i will grow "<<endl;
       }
       ~Animal(){
           cout<<"animal destructor"<<endl;
           delete []Bio_name;
       }
};
int Animal::count=0;
class Human:protected Animal{
    public:
      char* gender;
      char* eyecolor;
      int height;
      char bloodgroup;
      static int popl;
    public:
      //this is expilcit envocation of base class constructor 
      Human(int weight,int age ,char* gender,char *eyecolor,int height,char blood):Animal(weight,age,(char *)"HUMAN"){
                cout<<"human class constructor "<<endl;
                this->gender=new char[100];
                this->eyecolor=new char[100];
                this->height=height;
                this->bloodgroup=blood;
                strcpy(this->gender,gender);
                strcpy(this->eyecolor,eyecolor);
                popl++;
       };
       void details(){
            cout<<"[ gender = "<<this->gender<<" , ";
            cout<<"eyecolor = "<<this->eyecolor<<" , ";
            cout<<"height = "<<this->height<<" , ";
            cout<<"blood group  = "<<this->bloodgroup<<" ] "<<endl;
            cout<<endl;
       }
       void Hunting(){
            cout<<"i can hunt spend most of life as hunteres and gatheres "<<endl;
       }
       void exploring(){
            cout<<"exploring is one of my favourite hobby "<<endl;
       }
       static int getpopl(){
         return Human::popl;
       }
       ~Human(){
         delete []gender;
         delete []eyecolor;
         cout<<" human destructor are fun "<<endl;
       }
};
int Human::popl=0;
class Male:public Human{
    public:
       char* name;
       int muscles;
    public:
      //explicit innvocation of base class constructor 
      Male(char* name,int muscles,int weight,int age,char *eyecolor,int height,char blood):Human(weight,age,(char *)"Male",eyecolor,height,blood){
         cout<<"male class constructor "<<endl;
         this->name=new char[100];
         strcpy(this->name,name);
         this->muscles =muscles;
      };
      void sleeping(){
        cout<<"male is sleeping with fun "<<endl;
      }
      void studying(){
        cout<<"male can study also with fun "<<endl;
      }
      void printing(){
        this->getdata();
        this->details();
        cout<<"[ name = "<<this->name<<" ,";
        cout<<" muscles = "<<this->muscles<<" ] "<<endl<<endl;
        this->respiring();
        this->Growing();
      }
      void showstats(){
         cout<<"no of animal "<<Animal::getCount()<<endl;
         cout<<"no of humans "<<Human::getpopl()<<endl;
      }
      ~Male(){
        cout<<"male class destructor "<<endl;
        delete []name;
      }
};
int main(){
    char array[100];
    cout<<"please enter the name ";
    cin.getline(array,100);
    int m;
    cout<<"enter the muscles ";
    cin>>m;
    int w,age;
    cout<<"enter the weight ";
    cin>>w;
    cout<<"enter the age ";
    cin>>age;
    cout<<"enter the eyecolor ";
    char array1[100];
    cin.ignore();
    cin.getline(array1,100);
    int h;
    cout<<"enter the height ";
    cin>>h;
    char bl;
    cout <<"enter the blood group ";
    cin>>bl;
    Male m1(array,m,w,age,array1,h,bl);
    m1.printing();
    m1.showstats();
    m1.sleeping();
    m1.studying();
    m1.exploring();
    m1.Hunting();
    return 0;
}
//the order of calling of constructor is from base to derived class
//the order of execution is from derived to base cllass here is the example of multilevel inheritance
//the male class inherits from the human class where as the human class inherits from the animal class we have employed different mode of inheritance here to show the verstality of the language
//use of this hould be there for perfext execution
/* animal->human->male
  consrtucor calling= male ,human ,animal
  constructor called =  animal , human , male  
  destructor call male ,human ,animal
*/
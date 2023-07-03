#include<iostream>
using namespace std;
class Student{
    private:
       string Name;
       int rollno;
       int age;
       static int studentcount;
    public:
       Student(){
           studentcount++;
       }
       int getRoll(){
            return this->rollno;
       }
       string getName(){
            return this->Name;
       }
       int getAge(){
            return this->age;
       }
       void setRollno(int roll){
            this->rollno=roll;
       }
       void setAge(int age){
            this->age=age;
       }
       void setName(string b){
            this->Name=b;
       }
       static int getCount(){
            return studentcount;
       }
       //this wrapping of data members and methods is know as encaptulsation
       //it helps to do data hiding and information hiding  the basic thing
       //an fully encapsulated class has its data members as private
};
int Student::studentcount=0;
int main(){
       Student s1;
       s1.setAge(20);
       s1.setRollno(1214);
       string name;
       getline(cin,name);
       s1.setName(name);
       cout<<"name = "<<s1.getName()<<endl;
       cout<<s1.getName()+" age = "<<s1.getAge()<<endl;
       cout<<s1.getName()+" rollno = "<<s1.getRoll()<<endl;
       cout<<"the student count at this stage is "<<Student::getCount()<<endl;
       return 0;
        /*the main advanatage is security and 
          code reusability and
          as well as we can make an class read Only by this method 
          unit testing and much more
        */
}
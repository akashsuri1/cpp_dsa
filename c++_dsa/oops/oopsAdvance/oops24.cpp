#include<iostream>
using namespace std;
class student{
    protected:
        int roll_no;
    public:
        student(){
            cout<<"simple constructor"<<endl;
        }
        student(int rollno){
            cout<<"student constructor"<<endl;
            roll_no=rollno;
        }
        void getrollno(void){
            cout<<"roll no is "<<roll_no<<endl;
        }
        ~student(){
            cout<<"The semester is over"<<endl;
        }
};
class test:virtual public student{
    protected:
      int marks;
    public:
      test(int marks){
        this->marks=marks;
        cout<<"test constructor is "<<endl;
      }
      void getmarks(void){
        cout<<"the marks are"
            <<marks<<endl;
      }
      ~test(){
        cout<<"test is destroyed"<<endl;
      }
};
class result:public test{
    protected:
       int year;
    public:
     result(int marks,int roll_no,int year):test(marks),student(roll_no),year(year){
        cout<<"result constructor"<<endl;
     }
     void display(){
        cout<<"the year is "<<year<<endl;
        getmarks();
        getrollno();
     }
     ~result(){
        cout<<"you are placed"<<endl;
     }

};
int main(){
    result akash(90,1214,2026);
    akash.display();
    return 0;
}
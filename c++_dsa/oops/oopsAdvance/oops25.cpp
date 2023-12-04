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
      test(int marks,int roll_no):student(roll_no){
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
class sports:public virtual student{
    protected:
        int score;
    public:
        sports(int score,int roll_no):student(roll_no){
            cout<<"sports constuctor"<<endl;
            this->score=score;
        }
        void getscore(){
            cout<<"the score is "<<score<<endl;
        }
        ~sports(){
            cout<<"sports destuctor"<<endl;
        }

};
class result:public test,public sports{
    protected:
       int year;
       int total;
    public:
     result(int marks,int score,int roll_no,int year):sports(score,roll_no),test(marks,roll_no),student(roll_no),year(year){
        cout<<"result constructor"<<endl;
     }
     void display(){
        cout<<"the year is "<<year<<endl;
        total=score+marks;
        getmarks();
        getrollno();
        getscore();
        cout<<"total is "<<total<<endl;
     }
     ~result(){
        cout<<"you are placed"<<endl;
     }

};
int main(){
    result akash(90,9,1214,2026);
    akash.display();
    return 0;
}

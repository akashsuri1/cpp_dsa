#include<iostream>
#include<iomanip>
using namespace std;
class test{
    private:
        int maths;
        int physics;
        float percentage;
    public:
        //this is intilization list 
        test(int i,int j):maths(i),physics(j),percentage((maths+physics)*1.0/2){
            cout<<"the constructor is executed"<<endl;
        }
        void result(){
            cout<<"MATH\'S Marks =  "<<maths<<endl;
            cout<<"Physic\'s Marks = "<<physics<<endl;
            cout<<"Total percentage = "<<fixed<<setprecision(2)<<percentage<<" % "<<endl;
        }

};
int main(){
    int m1,m2;
    cin>>m1>>m2;
    test sem1(m1,m2);
    sem1.result();
    return 0;
}
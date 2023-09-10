#include<bits/stdc++.h>
using namespace std;
struct node{
    string name;
    double cgpa;
    int rollno;
    char grade;
    node(){
        cout<<"it is not empty"<<endl;
    }
    node(string str_,double cgpa_,int roll_,char gr_){
        name=str_;
        cgpa=cgpa_;
        rollno=roll_;
        grade=gr_;
    }
};
void print(node& n1){
    cout<<"Name "<<n1.name<<endl;
    cout<<"Cgpa "<<n1.cgpa<<endl;
    cout<<"rollno "<<n1.rollno<<endl;
    cout<<"grade "<<n1.grade<<endl;
}
int main(){
    node s1;
    s1.name="akash";
    s1.cgpa=10.00;
    s1.rollno=14;
    s1.grade='o';
    node* s2=new node("raj",9.7,22,'G');
    print(s1);
    print(*s2);
    delete s2;
    return 0;
}
//typedef is not needed in c++ struct and class are similar only difference is by default all things are public in case of struct
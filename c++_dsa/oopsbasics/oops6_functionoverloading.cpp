#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
float sum(float a,float b){
    return a+b;
}
void sum(int a,float b){
    cout<<"func one"<<endl;
    cout<<"the sum is "<<a+b<<endl;
}
void sum(float a,int b){
    cout<<"func two"<<endl;
    cout<<"the sum is "<<a+b<<endl;
}
int main(){
    //this is an example of function overloading in cpp
    //so when we overload an function it can have different type of argument or no of argument
    int a,b,c;
    cin>>a>>b>>c;
    float d,f;
    cin>>d>>f;
    cout<<"the sum is "<<sum(a,b)<<endl;
    cout<<"the sum is "<<sum(a,b,c)<<endl;
    cout<<"the sum is "<<sum(d,f)<<endl;
    sum(a,d);
    sum(f,b);
    return 0;
}
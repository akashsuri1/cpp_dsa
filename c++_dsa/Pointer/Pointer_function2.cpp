#include<iostream>
using namespace std;
void update(int *p){
    p=p+1;
    cout<<"An copy of pointer is created and the increment take place\'s in it"<<endl
    <<"If we try to update the value pointed by that pointer that can happen"<<endl;
    cout<<"Inside function : "<<p<<endl;
}
int main(){
    int n=5;
    int* ptr=&n;
    cout<<"Before : "<<ptr<<endl;
    update(ptr);
    cout<<"After : "<<ptr<<endl;
    return 0;
}
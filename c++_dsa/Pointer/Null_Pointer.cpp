#include<iostream>
using namespace std;
int main(){
    int num=5;
    int *ptr=nullptr;
    ptr=&num;
    cout<<"Null pointer intialization :- "<<endl;
    cout<<"Address is : "<<ptr<<endl;
    cout<<"Value is : "<<*ptr<<endl;
    int *ptr2=&num;
    cout<<"Normal intialization :- "<<endl;
    cout<<"Address is : "<<ptr2<<endl;
    cout<<"Value is : "<<*ptr2<<endl;
    cout<<"There is no Difference and hence better to intialize it with nullptr."<<endl;
    return 0;
}
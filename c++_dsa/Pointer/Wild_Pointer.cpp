#include<iostream>
using namespace std;
int main(){
    int *ptr;
    cout<<"Address is : "<<ptr<<endl;
    cout<<"Value is : "<<*ptr<<endl;
    cout<<"Since it was an unintialized pointer."<<endl
    <<"De-referencing it can produce unexpected result."<<endl
    <<"So it is an good practice to avoid it."<<endl
    <<"By using null pointer or zero "<<endl;
    int *ptr2=nullptr;
    cout<<"Address is : "<<ptr2<<endl;
    cout<<"Value is : "<<*ptr2<<endl;
    return 0;
}
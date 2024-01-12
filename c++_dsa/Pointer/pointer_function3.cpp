#include<iostream>
using namespace std;
void update(int *ptr){
    *ptr=*ptr+1;
    cout<<"Pointer\'s value is not changed."<<endl
    <<"Here value pointed by that pointer is changed."<<endl
    <<"Therefore it reflect\'s in main also.\n";
    cout<<"Inside : "<<*ptr<<endl;
}
int main(){
    int n=5;
    int *ptr=&n;
    cout<<"Before : "<<*ptr<<endl;
    update(ptr);
    cout<<"After : "<<*ptr<<endl;
    return 0;
}
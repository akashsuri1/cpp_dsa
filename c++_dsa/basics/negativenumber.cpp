#include<iostream>
using namespace std;
int main(){
    int a=-3;
    cout<<a<<"this is an signed integer\n mostly by default the integer is signed"<<endl;
    unsigned int b=123333333;
    cout<<b<<endl;
    unsigned int c=-9;
    cout<<c<<" if you typecaste an negative number into unsigned int an large value will be displayed"<<endl<<"due to 2s compliment";
    return 0;
}
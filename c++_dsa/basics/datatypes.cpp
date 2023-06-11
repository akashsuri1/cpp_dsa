#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=5;
    cout<<a<<endl;
    char b='A';
    cout<<b<<endl;
    float c_1=3.122222631;   
    double c_2=5.6666666666666;
    cout<<setprecision(12);
    cout<<c_1<<endl;
    cout<<c_2<<endl;
    bool e=true;
    cout<<e<<endl;
    cout<<sizeof(c_2)<<endl;
    return 0;
    //so therefore double show more precise value than
    //then the float can hold larger values easily
    //variable name can be upper or lower case and can contain _ and number but it never starts with an number
}

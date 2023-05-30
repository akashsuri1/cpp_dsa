#include<iostream>
using namespace std;
int main(){
    int a=0;

    bool first=(5>4)&&(2>3);
    cout<<first<<endl;
    
    bool second=(a++)||(3<4);
    cout<<second<<endl;

    cout<<a<<endl;
    int b=0;
    cout<<!b<<endl;

    int z=23;
    cout<<!z<<endl;
    
    return 0;

}
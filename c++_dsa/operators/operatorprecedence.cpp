#include<iostream>
using namespace std;
int main(){
    int a=2*3/4+5;
    cout<<a<<endl;
    //when more than one operator are used the output completely depends 
    //on the operator precedence so therefore we will use brackets to ease this problem;
    int b=((2*3)/4)+5;
    cout<<b<<endl;
    return 0;
}
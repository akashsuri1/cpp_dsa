#include<iostream>
using namespace std;
int main(){
    int a='a';
    //so here an character asci value is typecasted 
    //an integer
    cout<<a<<endl;
    char ch=97;
    //so here the integer is typecasted into an integer
    cout<<ch<<endl;
    char ch_2=123456;
    //so here the integer is typecasted into an character but as size is large only intial value is copied and rest bit get wasted 
    cout<<ch_2<<endl;
    return 0;
}
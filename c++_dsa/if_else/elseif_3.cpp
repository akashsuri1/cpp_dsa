#include<iostream>
using namespace std;
int main(){
    int a=2;
    int b=a+1;
    if((a=3)==b){
        cout<<a<<" this is true"<<endl;
    }else{
        cout<<a+1<<" this is false"<<endl;
    }
    return 0;
}
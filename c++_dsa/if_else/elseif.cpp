#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a ";
    cin>>a;
    if(a>0){
        cout<<"a is positive"<<endl;
    }else if(a==0){
        cout<<"a is zero"<<endl;
    }else{
        cout<<"a is negative"<<endl;
    }
    //so using else if to check condition again  after if block make the code more organized and readiable
    return 0;
}
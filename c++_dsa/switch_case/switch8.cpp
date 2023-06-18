#include<iostream>
using namespace std;
int main(){
    int num=1;
    char ch='1';
    cout<<endl;
    switch(ch){
        case 1:cout<<"first"<<endl;
               cout<<"first again "<<endl;
               break;
        case '1':cout<<"character one "<<endl;
                 switch(num){
                 case 1:cout<<"the value of num is "<<num<<endl;
                       break;
                }
                break;
        default:cout<<"default case"<<endl;
    }
    cout<<endl;
    return 0;
    // we can use constant as integer or character and can use nested switch like in this case 
    //but we dont use this in real life 
}
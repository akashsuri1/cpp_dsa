#include<iostream>
using namespace std;
int main(){
    int num=1;
    cout<<endl;
    switch(num*2){
        case 2:cout<<"the value of expression is 2"<<endl;
               break;//to ensure other case  dont execute we come out of the switch block
        case 'a':cout<<"the charactert is A"<<endl;
                break;
        default:cout<<"so we can use this default case also"<<endl;
    }
    cout<<endl;
    //so we can use an integer expersiion also which produce an constan
    
}
#include<iostream>
using namespace std;
int main(){
    char ch='1';
    cout<<endl;
    switch(ch){
        case 1:cout<<"first"<<endl;
               cout<<"first again"<<endl;
               break;
        case '1':cout<<"character one"<<endl;
        default:cout<<"it is the default case "<<endl;
    }
    cout<<endl;
    return 0;
}
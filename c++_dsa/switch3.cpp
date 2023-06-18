#include<iostream>
using namespace std;
int main(){
    char ch='a';
    cout<<endl;
    switch(ch){
        case 1:cout<<"first"<<endl;
               break;
        case '1':cout<<" character one "<<endl;
               break;
        default:cout<<"it is the default case "<<endl;
    }
    //if they dont match with any case then the default case is executed but if default case is not there then it jus comes out of switch block
    cout<<endl;
    return 0;
}